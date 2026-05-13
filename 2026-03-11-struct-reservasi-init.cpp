#include <bits/stdc++.h>

using namespace std;

struct Reservasi {
    char orang;
    int mulai, selesai;
    string coba;
};

// memory address
// struct

int main() {
    Reservasi r1{'C', 20, 10, "COBA"};
    r1.orang = 'C';
    r1.mulai = 10;
    r1.selesai = 20;
}