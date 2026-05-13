#include <bits/stdc++.h>

using namespace std;
/*
Seorang guru ingin menyimpan nilai 4 anaknya di 3 mapel
mapel kolom pertama adalah MTK
mapel kolom kedua adalah Fisika
mapel kolom ketiga adalah Biologi

        MTK  Fisika Biologi
Anak 1
Anak 2
Anak 3
Anak 4
*/

/*
tipe_data nama_fungsi(tipe_data parameter1, tipe_data parameter2, tipe_data parameter3)
*/
string penentuMapel(int angka, vector<string> listMapel) {
    if (angka < 0 || angka >= listMapel.size()) return "Invalid Mapel";
    return listMapel[angka];
    // if (angka == 0) {
    //     return "MTK";
    // } else if (angka == 1) {
    //     return "Fisika";
    // } else {
    //     return "Biologi";
    // }
}

int main() {
    vector<vector<int>> nilaiSiswa(4, vector<int>(3));
    vector<string> listMapel = {"Biologi", "MTK", "Fisika"};
    vector<string> listJurusan = {"Geografi", "Biologi", "Astronomi", "Informatika"};

    for(int i = 0 ; i < nilaiSiswa.size(); i++) {
        cout << "Masukkan nilai siswa " << (i+1)  << endl;
        for(int j = 0; j < nilaiSiswa[0].size(); j++) {
            string mapel = penentuMapel(j, listMapel);

            cout << "Masukkan nilai " << mapel << ": ";
            // cin >> nilaiSiswa[i][j]; // juga bisa
            int nilai;
            cin >> nilai; 

            nilaiSiswa[i][j] = nilai;
        }
    }

    for(int i = 0; i < nilaiSiswa.size(); i++) {
        cout << "Nilai Siswa " << (i + 1) << endl;
        for(int j = 0; j < nilaiSiswa[0].size(); j++) {
            string mapel = penentuMapel(j, listMapel);

            cout << mapel << ": " << nilaiSiswa[i][j] << endl; 
        }
        cout << "----------" << endl;
    }
    return 0;
}
