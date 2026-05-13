#include <bits/stdc++.h>

using namespace std;

int main() {
    int angka = 100;

    do {
        cout << angka << endl;

        angka += 10;
    } while(angka < 50);

    while(angka < 50) {
        cout << angka << endl;

        angka += 10;
    }



    return 0;
}