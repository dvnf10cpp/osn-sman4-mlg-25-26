#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

void tampilkanMenu() {
    cout << "\nPilih aksi:\n";
    cout << "1. Masuk ruangan\n";
    cout << "2. Ambil harta\n";
    cout << "3. Cek status\n";
    cout << "4. Keluar\n";
    cout << "> ";
}

void ambilHarta(int& koin) {
    int dapat = rand() % 30 + 10;
    koin += dapat;
    cout << "Kamu mengambil harta. Koin +" << dapat
         << ". Total koin: " << koin << "\n";
}

void kurangiHP(int& hp, int damage) {
    hp -= damage;
    if (hp < 0) hp = 0;
    cout << "HP berkurang " << damage
         << ". HP sekarang: " << hp << "\n";
}

int hitungSkor(int hp, int koin) {
    return hp + koin;
}

void jelajahiRuangan(int& hp, int& koin, int kedalaman) {
    if (kedalaman == 0) {
        cout << "Kamu sudah mencapai batas kedalaman. Kembali ke permukaan.\n";
        return;
    }
    if (hp <= 0) return;

    int isi = rand() % 3;
    cout << "\n--- Ruangan (sisa kedalaman: " << kedalaman << ") ---\n";

    if (isi == 0) {
        cout << "Ditemukan harta!\n";
        ambilHarta(koin);
    } else if (isi == 1) {
        cout << "Ada monster!\n";
        int damage = rand() % 25 + 10;
        kurangiHP(hp, damage);
        if (hp <= 0) {
            cout << "Kamu pingsan di dalam gua...\n";
            return;
        }
    } else {
        cout << "Ruangan ini kosong.\n";
    }

    char lanjut;
    cout << "Lanjut lebih dalam? (y/n): ";
    cin >> lanjut;
    if (lanjut == 'y' || lanjut == 'Y') {
        jelajahiRuangan(hp, koin, kedalaman - 1);
    }
}

int main() {
    srand(time(0));

    string nama;
    int hp = 100;
    int koin = 0;
    bool keluar = false;
    bool kalah = false;

    cout << "=== PETUALANGAN GUA HARTA KARUN ===\n";
    cout << "Masukkan nama pemain: ";
    cin >> nama;
    cout << "\nHalo, " << nama << "! HP: " << hp << " | Koin: " << koin << "\n";

    for (int giliran = 1; giliran <= 10; giliran++) {
        cout << "\n[Giliran " << giliran << "]";
        tampilkanMenu();

        int pilih;
        cin >> pilih;

        if (pilih == 1) {
            int kedalaman;
            cout << "Mau jelajah sedalam apa? (1-10): ";
            cin >> kedalaman;
            if (kedalaman < 1) kedalaman = 1;
            if (kedalaman > 10) kedalaman = 10;
            jelajahiRuangan(hp, koin, kedalaman);
        } else if (pilih == 2) {
            ambilHarta(koin);
        } else if (pilih == 3) {
            cout << "Status -> HP: " << hp << " | Koin: " << koin << "\n";
        } else if (pilih == 4) {
            keluar = true;
        } else {
            cout << "Pilihan tidak valid.\n";
            giliran--;
            continue;
        }

        if (hp <= 0) {
            kalah = true;
            break;
        }
        if (keluar) break;
    }

    cout << "\n=== PERMAINAN SELESAI ===\n";
    cout << "HP akhir: " << hp << " | Koin akhir: " << koin << "\n";
    cout << "Skor total: " << hitungSkor(hp, koin) << "\n";

    if (kalah) {
        cout << "Status: KALAH (HP habis)\n";
    } else if (koin >= 50) {
        cout << "Status: MENANG\n";
    } else {
        cout << "Status: KALAH (koin kurang dari 50)\n";
    }

    return 0;
}
