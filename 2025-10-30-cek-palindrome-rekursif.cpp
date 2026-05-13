#include <bits/stdc++.h>

using namespace std;

bool isPali(string s, int start, int end) {
    if(start >= end) {
        return true;
    }
    if(s[start] != s[end]) {
        return false;
    }
    return isPali(s, start + 1, end - 1);
}

int main() {
    string s;
    cin >> s;
    if (isPali(s, 0, s.length() - 1)) {
        cout << "Palindrome";
    } else {
        cout << "Not palindrome";
    }
    return 0;
}