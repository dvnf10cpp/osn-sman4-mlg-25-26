#include <bits/stdc++.h>
using namespace std;

int GSI(const vector<int>& B, int x, int y) { return B[y] - B[x - 1]; }

int main() {
    vector<int> A = {1, 2, 3, 4, 5};
    vector<int> B;
    B.push_back(0);
    for (int v : A) B.push_back(B.back() + v);

    pair<int,int> calls[] = {{1,4},{2,4},{4,5},{5,5},{3,4}};
    char labels[] = {'A','B','C','D','E'};
    int best = INT_MIN; char bestL = '?';
    for (int i = 0; i < 5; i++) {
        int v = GSI(B, calls[i].first, calls[i].second);
        cout << labels[i] << ") GSI(B," << calls[i].first << ',' << calls[i].second << ") = " << v << '\n';
        if (v > best) { best = v; bestL = labels[i]; }
    }
    cout << "Paling besar -> " << bestL << " dengan nilai " << best << '\n';
}
