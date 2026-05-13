#include <bits/stdc++.h>
#include <string>

using namespace std;

string balikkanKata(string kata) {
    // panjang = 5
    int panjang = kata.size();
    
    if (panjang <= 1) return string() + kata[0];
    // kata = devan
    // karakterTerakhir = n
    char karakterTerakhir = kata[panjang - 1];
    string sisa = kata.substr(0, panjang - 1);
    // sisa = deva
    return (string() + karakterTerakhir) + balikkanKata(sisa);
}

int hitungFaktorialRekursif(int n) {
    if (n == 0) return 1;
    return n * hitungFaktorialRekursif(n - 1);
}

// Versi iteratif
int hitungFaktorialIteratif(int n) {
    int hasil = 1;
    for(int i = 0; i <= n; i++) {
        hasil *= i;
    }
    return hasil;
}

int main() {
    string nama = "ambatuk";
    
    string kebalik = balikkanKata(nama);
    
    cout << kebalik << endl;
    
    return 0;
}