#include <bits/stdc++.h>
using namespace std;

int RAHASIA(vector<int> A) {
    int N = A.size(), sum = 0;
    for (int i = 0; i < N; i++) {
        int ctr = 0;
        for (int j = 0; j < N; j++) {
            if (A[j] > A[i]) ctr += 1;
            else if (A[j] < A[i]) ctr -= 1;
        }
        if (ctr == 0) sum += A[i];
    }
    return sum;
}

int PETAK(vector<vector<int>> B) {
    vector<int> C;
    for (auto& row : B) C.push_back(RAHASIA(row));
    return RAHASIA(C);
}

int main() {
    // PETAK = median dari 5 median baris. 25! permutasi terlalu banyak buat
    // brute force, jadi kita pakai argumen counting:
    //   misal hasilnya = M, berarti m3 = M, dan m4, m5 > M.
    //   Tiga baris "atas" (yang medianya >= M) masing-masing butuh
    //   2 elemen yang lebih besar dari mediannya. Hitung totalnya:
    //     baris m3: butuh 2 elemen > M
    //     baris m4: m4 sendiri + 2 elemen > m4 = 3 elemen > M
    //     baris m5: m5 sendiri + 2 elemen > m5 = 3 elemen > M
    //   Total elemen > M yang dibutuhin = 8.
    //   Yang tersedia di {1..25}: 25 - M. Jadi 25 - M >= 8 -> M <= 17.
    //
    // Kita verifikasi M=17 beneran bisa dicapai pakai konstruksi di bawah.
    vector<vector<int>> B = {
        {13, 14, 17, 18, 19}, // median 17
        {11, 12, 20, 21, 22}, // median 20
        { 9, 10, 23, 24, 25}, // median 23
        { 1,  2,  3,  4,  5}, // median 3
        { 6,  7,  8, 15, 16}  // median 8
    };
    cout << "PETAK dari konstruksi = " << PETAK(B) << '\n';
    cout << "Batas atas terbukti 17, dan tercapai. Jadi max = 17.\n";
}
