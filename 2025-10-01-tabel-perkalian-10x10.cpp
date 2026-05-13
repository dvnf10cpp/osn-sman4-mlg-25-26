#include <bits/stdc++.h>

using namespace std;

/*
1 2 3 baris 1, indeks i 0
4 5 6 baris 2, indeks i 1
7 8 9 baris 3, indeks i 2
*/

/*
  1 2 3 4 5 6 7 8 9 10
1 1 2
2 2 4
3
4
5
6
7
8
9 
10
*/

int main() {
    vector<vector<int>> tabel(10, vector<int>(10, 1));

    for(int i = 0; i < tabel.size(); i++) {
        for(int j = 0; j < tabel[0].size(); j++) {
            tabel[i][j] = (i + 1) * (j + 1);
        }
    }

    for(int i = 0; i < tabel.size(); i++) {
        for(int j = 0; j < tabel[0].size(); j++) {
            cout << tabel[i][j] << " ";
        }

        cout << endl;
    }

    // cout << v[0][0] << endl;

    // int arr[3][3];

    // for(int i = 0; i < 3; i++) { // i dipake buat akses baris
    //     for(int j = 0; j < 3; j++) { // j dipake buat akses kolom
    //         arr[i][j] = (i * 3) + (j+1);
    //     }
         

    // }
    return 0;
}
