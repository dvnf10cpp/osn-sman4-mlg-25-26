#include <bits/stdc++.h>
using namespace std;

int TIGA(int N) {
    if (N <= 1) return 1;
    else if (N % 3 == 0) return TIGA(N - 1) + TIGA(N - 3);
    else if (N % 3 == 1) return TIGA(N - 2);
    else return TIGA(N - 3);
}

int main() {
    int opts[] = {2, 6, 14, 18, 25};
    char labels[] = {'A', 'B', 'C', 'D', 'E'};
    int best = -1; char bestL = '?';
    for (int i = 0; i < 5; i++) {
        int v = TIGA(opts[i]);
        cout << labels[i] << ") TIGA(" << opts[i] << ") = " << v << '\n';
        if (v > best) { best = v; bestL = labels[i]; }
    }
    cout << "Paling besar -> " << bestL << " dengan nilai " << best << '\n';
}
