#include <bits/stdc++.h>

using namespace std;

double hitungRata2(vector<int> nilaiSiswa) {
    double hasil = 0;
    int size = nilaiSiswa.size();
    for(auto nilai : nilaiSiswa) {
        hasil += nilai;
    }
    return hasil / size;
}

void tampilkanSiswaHebat(vector<int> nilaiSiswa, double rata2) {
    cout << "List siswa yang nilainya diatas " << rata2 << ": ";
    for(int i = 0; i < nilaiSiswa.size(); i++) {
        if (nilaiSiswa[i] > rata2) {
            cout << (i + 1) << ", ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Masukkan jumlah siswa: ";
    cin >> n;

    vector<int> nilaiSiswa(n, 0);

    for(int i = 0; i < n; i++) {
        cout << "Nilai siswa ke-" << i+1 << ": ";
        cin >> nilaiSiswa[i];
    }

    double rata2 = hitungRata2(nilaiSiswa);
    cout << "Rata-rata nilai siswa: " << rata2 << endl;

    tampilkanSiswaHebat(nilaiSiswa, rata2);
    
    return 0;
}