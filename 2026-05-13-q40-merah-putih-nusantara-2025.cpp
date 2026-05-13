#include <bits/stdc++.h>
using namespace std;

// Versi rekursif PUTIH bakal kena stack overflow di C=2025,
// jadi kita pakai loop biasa. Hasilnya sama persis.
int gcd_i(int a, int b) { while (b) { int t = a % b; a = b; b = t; } return a; }

int NUSANTARA(int A, int B) {
    int count = 0;
    for (int k = 1; k <= A; k++) if (gcd_i(A, k) == B) count++;
    return count;
}

int main() {
    cout << "NUSANTARA(2025, 135) = " << NUSANTARA(2025, 135) << '\n';
    // 2025 = 3^4 * 5^2, 135 = 3^3 * 5, dan 2025/135 = 15.
    // Jawabannya phi(15) = phi(3) * phi(5) = 2 * 4 = 8.
}
