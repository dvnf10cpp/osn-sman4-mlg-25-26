#include <iostream>
using namespace std;

int main() {
    int luas_kandang = 12;
    int total_luas_kandang = luas_kandang;
    
    for(int bulan = 1; bulan <= 10; bulan++) {
        luas_kandang += 7;
        total_luas_kandang += luas_kandang;
    }
    
    cout << total_luas_kandang << endl;
    
    return 0;
}
