#include <bits/stdc++.h>

using namespace std;

// 0
// 12
// 345
// 6789
// 01234

int main() {
    int n; 
    cin >> n;

    int output = 0;
    
    for(int i = 1; i <= n; i++) {
        // baris pertama= 1 bilangan
        // baris kedua = dua bilangan 
        for(int j = 1; j <= i; j++) {
            cout << output++;
            output %= 10; // output = output % 10
        }
        cout << endl;
    }

    return 0;
}
