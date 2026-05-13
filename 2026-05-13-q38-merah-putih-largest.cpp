#include <bits/stdc++.h>
using namespace std;

// MERAH itu algoritma Euclid biasa, jadi MERAH(A, B) = gcd(A, B).
int MERAH(int A, int B) {
    if (B == 0) return A;
    return MERAH(B, A % B);
}

int main() {
    int opts[] = {4, 9, 17, 18, 34};
    char labels[] = {'A', 'B', 'C', 'D', 'E'};
    int best = -1; char bestL = '?';
    for (int i = 0; i < 5; i++) {
        int v = MERAH(24, opts[i]);
        cout << labels[i] << ") MERAH(24," << opts[i] << ") = " << v << '\n';
        if (v > best) { best = v; bestL = labels[i]; }
    }
    cout << "Paling besar -> " << bestL << " dengan nilai " << best << '\n';
}
