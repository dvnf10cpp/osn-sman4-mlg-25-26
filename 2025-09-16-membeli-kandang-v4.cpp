#include <bits/stdc++.h>

using namespace std;

int main() {
    int luas_kandang = 12;
    int total_luas_kandang = 12;
    int jumlah_kandang = 1;
    
    while(total_luas_kandang < 800) {
        luas_kandang += 7;
        total_luas_kandang += luas_kandang;
        jumlah_kandang += 1;
    }
    
    cout << jumlah_kandang << endl;
    return 0;
}