#include <bits/stdc++.h>

using namespace std;

int main() {
    map<char,int> mp;
    
    string a, b, c; 
    cin >> a >> b >> c;
    for(int i = 0; i < c.length(); i++) {
        // c[i]; // ngereturn karakter ke i dari string c
        mp[c[i]]++;
    }
    for(int i = 0; i < a.length(); i++) {
        mp[a[i]]--;
    }
    for(int i = 0; i < b.length(); i++) {
        mp[b[i]]--;
    }
    
    bool bisa = true;
    for(auto &p : mp) {
        // p = pair<char,int> 
        if (p.second != 0) {
            bisa = false;
            break; 
        } 
    }
    if (bisa) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}