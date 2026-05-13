#include <bits/stdc++.h>
using namespace std;

// Pakai memo, kalau rekursi polos N=2025 bakal lemot banget.
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
    int count = 0;
    for (int N = 1; N <= 2025; N++)
        if (TIGA(N) == 1) count++;
    cout << "Banyak N di [1..2025] dengan TIGA(N)=1: " << count << '\n';
}
