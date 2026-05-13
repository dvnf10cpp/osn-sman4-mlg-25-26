#include <bits/stdc++.h>
using namespace std;

// ctr==0 berarti jumlah elemen yang lebih besar dari A[i] sama dengan
// yang lebih kecil. Untuk N ganjil dan nilai distinct, ini = median.
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

int main() {
    vector<int> A = {16, 5, 20, 1, 11};
    cout << "RAHASIA({16,5,20,1,11}) = " << RAHASIA(A) << '\n';
}
