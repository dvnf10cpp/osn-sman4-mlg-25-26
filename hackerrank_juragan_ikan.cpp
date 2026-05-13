#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<vector<char>> v(n, vector<char>(n,' '));
    for(auto &s:v){
        for(auto &c:s) cin >> c;
    }
    int m[n+1]={0};
    int  c=0;
    for(int i = 0; i < n; i++) {
        for(int j =0; j <= i; j++) {
            if(v[i][j]=='*') c++;
            if(v[j][i]=='*') c++;
            if(i==j && v[i][j]=='*')c--;
        }
        m[i] = c;
    }
    int t;
    cin >> t;
    while(t--) {
        int k; cin >> k; cout << m[k-1] << endl;
    }
    return 0;
}
