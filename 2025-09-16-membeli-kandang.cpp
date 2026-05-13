#include <iostream>
using namespace std;

int main() {
    int luas_kandang = 12;
    
    for(int bulan = 1; bulan <= 3; bulan++) {
        luas_kandang += 7;
        cout << bulan << ": " << luas_kandang << endl;
    }

    return 0;
}
