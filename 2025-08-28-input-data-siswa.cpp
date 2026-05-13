#include <iostream>

using namespace std;

// Program masukkan data siswa
int main() {
    string namaLengkap;
    int nilaiMapelIPA;
    double tinggiBadan;

    cout << "Masukkan nama lengkap: ";
    // cin >> namaLengkap // gabisa masukkin string yang ada spasi
    getline(cin, namaLengkap);

    cout << "Masukkan nilai mapel IPA: ";
    cin >> nilaiMapelIPA;

    cout << "Masukkan tinggi badan: ";
    cin >> tinggiBadan;

    cout << "Nama Lengkap: " << namaLengkap << endl; 
    cout << "Nilai Mapel IPA: " << nilaiMapelIPA << endl; 
    cout << "Tinggi Badan: " << tinggiBadan << endl; 
    return 0;
}
