#include <bits/stdc++.h>

using namespace std;

int main() {
    /*
    FizzBuzz
    Angka habis dibagi 3, Fizz
    Angka habis dibagi 5, Buzz
    Angka habis dibagi 3 & 5, FizzBuzz
    Tidak habis dibagi 3 maupun 5, print angka

    Diberikan angka, print dari 1 sampai angka 
    */

    int angka;
    cin >> angka; 

    for(int i = 1; i <= angka; i++) {
        if(i % 3 == 0 && i % 5 == 0) {
            cout << "FizzBuzz" << endl;
        } else if(i % 3 == 0) {
            cout << "Fizz" << endl;
        } else if (i % 5 == 0) {
            cout << "Buzz" << endl;
        } else {
            cout << i << endl;
        }

    }




    return 0;
}