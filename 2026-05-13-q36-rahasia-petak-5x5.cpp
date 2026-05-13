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
    int N = B.size();
    vector<int> C;
    for (int i = 0; i < N; i++) C.push_back(RAHASIA(B[i]));
    return RAHASIA(C);
}

int main() {
    vector<vector<int>> B = {
        {16, 5, 20, 1, 11},
        {2, 17, 13, 14, 19},
        {15, 7, 21, 18, 9},
        {25, 6, 4, 12, 22},
        {23, 3, 24, 8, 10}
    };
    for (int i = 0; i < 5; i++)
        cout << "median baris " << i << " = " << RAHASIA(B[i]) << '\n';
    cout << "PETAK = " << PETAK(B) << '\n';
}
