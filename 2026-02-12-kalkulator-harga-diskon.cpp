#include <bits/stdc++.h>

using namespace std;

int main() {
    int g, u , s;
    cin >> g >> u >> s;
    
    int harga = (g * 15000) + (u * 14000) + (s * 12000);
    int diskon = harga - (harga * 0.2);
    
    cout << harga << endl;
    cout << diskon << endl;
    return 0;
}