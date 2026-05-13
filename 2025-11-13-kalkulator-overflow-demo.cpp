#include <bits/stdc++.h>
using namespace std;

string kalkulator(char op, vector<string> data) {
    if(op != '*' && op != '+') return "KESALAHAN";
    
    int hasil = 0;
    if (op == '*') hasil = 1;
    
    for(auto number : data) {
        int angka = stoi(number);
        if(op == '*') hasil = angka * hasil;    
        else hasil = angka + hasil;
    }
    
    return to_string(hasil);
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    long long a = (long long)INT_MAX + 1; // overflow
    long long b = (long long)INT_MIN - 1;
    cout << "batas atas: " << INT_MAX << endl;
    cout << "batas bawah: " << INT_MIN << endl;
    cout << "Hasil a: " << a << endl;
    cout << "Hasil b: " << b << endl;
    // cout << kalkulator('+', {"1234567890", "0", "987654321", "314159265"}) << endl;
    // cout << kalkulator('+', {"123", "456", "789", "111"}) << endl;
    // cout << kalkulator('*', {"123", "456", "789", "111"}) << endl;
    // cout << kalkulator('*', {"17", "8", "1945"}) << endl;
    // cout << kalkulator('?', {"3", "2", "1"}) << endl;
}
