#include <bits/stdc++.h>
using namespace std;

// B itu prefix sum dari A, dimulai dari 0.
int main() {
    vector<int> A = {1, 2, 3, 4, 5};
    vector<int> B;
    B.push_back(0);
    for (int i = 0; i < (int)A.size(); i++) B.push_back(B[i] + A[i]);

    cout << "B = {";
    for (size_t i = 0; i < B.size(); i++)
        cout << B[i] << (i + 1 == B.size() ? "" : ", ");
    cout << "}\n";
}
