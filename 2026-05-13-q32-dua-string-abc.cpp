#include <bits/stdc++.h>
using namespace std;

// DUA(S, T) ngitung berapa kali reverse(T) muncul di dalam S.
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
    cout << "DUA(\"ABCBAABCCBAABC\", \"CBA\") = "
         << DUA("ABCBAABCCBAABC", "CBA") << '\n';
}
