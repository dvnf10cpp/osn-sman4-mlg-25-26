#include <bits/stdc++.h>
using namespace std;

int GSI(const vector<int>& B, int x, int y) { return B[y] - B[x - 1]; }

// FUN cari maximum subarray sum (versi brute force pakai prefix sum).
int FUN(const vector<int>& A) {
    int N = A.size();
    vector<int> B;
    B.push_back(0);
    for (int i = 0; i < N; i++) B.push_back(B[i] + A[i]);
    int out = 0;
    for (int i = 1; i <= N; i++)
        for (int j = i; j <= N; j++)
            out = max(out, GSI(B, i, j));
    return out;
}

int main() {
    vector<int> A = {3,-2,4,-3,1,-4,2,-1,4,3,-2,3,-4,2,-2,3};
    cout << "FUN(A) = " << FUN(A) << '\n';
}
