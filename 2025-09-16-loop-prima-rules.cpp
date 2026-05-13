#include <bits/stdc++.h>

using namespace std;

int main() {
    
    /*
    Diberikan input Angka dan aturan berikut
    - Print dari 1 sampai Angka, termasuk Angka itu sendiri
    - Apabila nilai perulangan itu habis dibagi dengan 5, kita print Prima2
    - Apabila nilai perulangan habis dibagi dengan 7, kita print Prima3
    - Apabila nilai perulangan habis dibagi 11, kita skip bilangan tersebut
    - Apabila nilai perulangan habis dibagi dengan 23, kita keluar dari perulangan tersebut dan print "Selesai!"
    */

    int angka; cin >> angka;

    for(int i = 1; i <= angka; i++) {
        cout << i << endl;
        if(i % 5 == 0) {
            cout << "Prima2" << endl;
        }
        if(i % 7 == 0) {
            cout << "Prima3" << endl;
        } 
        if(i % 11 == 0) {
            continue;
        }
        if(i % 23 == 0) {
            cout << "Selesai" << endl;
            break;
        }
    }


    return 0;
}