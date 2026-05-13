#include <bits/stdc++.h>
using namespace std;

map<int,int> memo;
int TIGA(int N) {
    if (N <= 1) return 1;
    auto it = memo.find(N);
    if (it != memo.end()) return it->second;
    int r;
    if (N % 3 == 0)      r = TIGA(N - 1) + TIGA(N - 3);
    else if (N % 3 == 1) r = TIGA(N - 2);
    else                 r = TIGA(N - 3);
    return memo[N] = r;
}

int main() {
    long long sum = 0;
    for (int N = 1; N <= 100; N++) sum += TIGA(N);
    cout << "Jumlah TIGA(1)+...+TIGA(100) = " << sum << '\n';
}
