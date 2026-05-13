#include <bits/stdc++.h>
using namespace std;

void tampilakMap(map<char,int> map, string val) {
    cout << "Menampilkan map: " << val << endl; 
    for(auto pair : map) {
        cout << "--------------" << endl;
        cout << pair.first << ", ";
        cout << pair.second << endl;
    }
}
int main() {
    int q; 
    cin >> q;
    // c++, selain 0 adalah true
    while(q--) {
        string s, t;
        int n;
        cin >> n;
        cin >> s >> t;
        map<char,int> mpS;
        map<char,int> mpT;
        
        for(int i = 0; i < s.size();i ++) {
            char karakterI = s[i];
            mpS[karakterI]++;
        }
        for(int i = 0; i < t.size(); i++) {
            char karakterT = t[i];
            mpT[karakterT]++;
        }
        // tampilakMap(mpS, "Map S");
        // tampilakMap(mpT, "Map T");
        // 
        bool sama = true;
        
        for(auto pair : mpS) {
            // cout << "Mengecek jumlah frekuensi karakter: " << pair.first << endl;
            // cout << "Nilai pada Map S: " << pair.second << endl;
            // cout << "Nilai pada Map T: " << mpT[pair.first] << endl; 
            if (pair.second != mpT[pair.first]) {
                sama = false;
            }
        }
        if (sama) cout << "YES" << endl;
        else cout << "NO" << endl;        
    }

}