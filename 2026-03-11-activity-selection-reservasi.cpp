#include <iostream>
#include <algorithm>
using namespace std;

class Orang {
    public:

};

struct Reservasi {
    char nama;
    int mulai, selesai; // waktu dalam menit sejak 00:00
};

// Konversi format "HH:MM" ke menit
int to_menit(int jam, int menit) {
    return jam * 60 + menit;
}

void print_waktu(int m) {
    int jam = m / 60;
    int menit = m % 60;
    if (jam < 10) cout << "0";
    cout << jam << ":";
    if (menit < 10) cout << "0";
    cout << menit;
}

void print_reservasi(Reservasi r) {
    cout << "  " << r.nama << " (";
    print_waktu(r.mulai);
    cout << " - ";
    print_waktu(r.selesai);
    cout << ")" << endl;
}

int main() {
    int n;
    cout << "Jumlah pelanggan: ";
    cin >> n;

    Reservasi data[n];

    for (int i = 0; i < n; i++) {
        // 06:00 - 08:30
        int j1, m1, j2, m2;
        char c;
        cin >> j1 >> c >> m1 >> j2 >> c >> m2;
        data[i] = {(char)('A' + i), to_menit(j1, m1), to_menit(j2, m2)};
    }

    // Urutkan berdasarkan jam selesai
    sort(data, data + n, [](Reservasi a, Reservasi b) {
        return a.selesai < b.selesai;
    });

    cout << "\nPelanggan terlayani:" << endl;
    print_reservasi(data[0]);

    int batas = data[0].selesai;
    int total = 1;

    for (int i = 1; i < n; i++) {
        if (data[i].mulai >= batas) {
            print_reservasi(data[i]);
            batas = data[i].selesai;
            total++;
        }
    }
    cout << "Total: " << total << " pelanggan" << endl;
}
