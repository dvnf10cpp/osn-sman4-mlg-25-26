#include <bits/stdc++.h>

using namespace std;

int main() {
    // Studi Kasus Simpel
    // Buatlah map yang berisikan kelas dan tiap kelas ada nama siswa-siswi
    // Lalu tampilkan data tersebut, bikin programnya interaktif klo bisa
    
    map<string,vector<string>> daftarKelas;
    int jumlahKelas;
    cout << "Masukkan jumlah kelas: ";
    cin >> jumlahKelas;
    cin.ignore(256, '\n');
    
    for(int i = 0; i < jumlahKelas; i++) {
        int jumlahAnak; string kelas;
        cout << "Masukkan nama kelas: ";
        getline(cin, kelas);
        cout << "Masukkan jumlah anak: ";
        cin >> jumlahAnak;
        
        cin.ignore(256, '\n');
        for(int j = 0; j < jumlahAnak; j++) {
            string namaSiswa;
            cout << "Masukkan nama siswa kelas " << kelas << " ke-" << (j+1) << ": ";
            getline(cin, namaSiswa);
            
            daftarKelas[kelas].push_back(namaSiswa);
            cout << "Siswa berhasil dimasukkan!\n";
        }
    }
    
    cout << "=============================================================";
    for(const auto [namaKelas, isiKelas] : daftarKelas) {
        cout << "Nama Kelas: " << namaKelas << endl;
        cout << "Jumlah Siswa: " << isiKelas.size() << endl;
        cout << "List Siswa: ";
        for(auto s : isiKelas) cout << s << " ";
        cout << endl;
    }
    return 0;
}
