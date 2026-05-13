#include <bits/stdc++.h>
using namespace std;

int main() {
    string S = "ACCAAACCA";
    int N = S.size();
    // DUA(S,T) = banyak reverse(T) di S. Karena reverse bijektif,
    // jumlah T yang bikin DUA=2 sama dengan jumlah substring distinct
    // di S yang munculnya pas 2 kali.
    int total = 0;
    for (int len = 1; len <= N; len++) {
        map<string,int> freq;
        for (int i = 0; i + len <= N; i++) freq[S.substr(i, len)]++;
        int cnt = 0;
        for (auto& [u, c] : freq) if (c == 2) cnt++;
        cout << "panjang " << len << ": " << cnt << " substring frekuensi 2\n";
        total += cnt;
    }
    cout << "Jawaban (banyak T valid): " << total << '\n';
}
