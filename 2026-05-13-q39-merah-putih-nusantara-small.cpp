#include <bits/stdc++.h>
using namespace std;

int MERAH(int A, int B) {
    if (B == 0) return A;
    return MERAH(B, A % B);
}

// PUTIH hitung berapa k di [1..C] dengan gcd(A, k) = B.
int PUTIH(int A, int B, int C) {
    if (C == 0) return 0;
    if (MERAH(A, C) == B) return 1 + PUTIH(A, B, C - 1);
    return PUTIH(A, B, C - 1);
}

int NUSANTARA(int A, int B) { return PUTIH(A, B, A); }

int main() {
    cout << "NUSANTARA(12, 3) = " << NUSANTARA(12, 3) << '\n';
    // gcd(12,k)=3 berarti k kelipatan 3, dan k/3 koprima sama 12/3=4.
    // m yang koprima sama 4 di {1,2,3,4}: m=1 dan m=3, jadi k=3 dan 9.
    // Jawabannya phi(4) = 2.
}
