#include <bits/stdc++.h>
using namespace std;

int DUA(const string& S, const string& T) {
    int N = S.length(), M = T.length();
    int P = 0;
    for (int i = 0; i <= N - M; i++) {
        int Q = 1;
        for (int j = 0; j < M; j++)
            if (S[i + j] != T[M - 1 - j]) Q = 0;
        P += Q;
    }
    return P;
}

int main() {
    string S = "BBABAABBAAABBABBAAABBBAAABBABBA";
    int N = S.size();

    // DUA(S,T) = banyak kemunculan reverse(T) di S.
    // Karena reverse bijektif, kita cari aja substring panjang >= 3
    // yang paling sering muncul di S. Nanti T = kebalikannya.
    int best = 0;
    string bestU, bestT;
    for (int len = 3; len <= N; len++) {
        map<string,int> freq;
        for (int i = 0; i + len <= N; i++) freq[S.substr(i, len)]++;
        for (auto& [u, c] : freq) {
            if (c > best) {
                best = c;
                bestU = u;
                bestT = string(u.rbegin(), u.rend());
            }
        }
    }
    cout << "Nilai DUA paling besar = " << best << '\n';
    cout << "Contoh T = \"" << bestT
         << "\" (reverse-nya muncul " << best << "x di S)\n";
}
