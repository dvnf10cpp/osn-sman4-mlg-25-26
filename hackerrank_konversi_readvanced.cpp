#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll MOD = 1e9+7;

int main() {
    ll scs[6] = {365 * 24 * 3600, 30 * 24 * 3600, 24 * 3600, 3600, 60, 1};
    char asc[6] = {'Y', 'M', 'D', 'h', 'm', 's'};
    int t; cin >> t; cin.ignore(256, '\n');
    while(t--) {
        string s, num = ""; 
        getline(cin, s);

        ll sum = 0, tmp = 0; int len;
        bool times[6] = {0};
        len = s.size();
        for(int i = 0; i < len; i++) {
            if (s[i] >= '0' && s[i] <= '9') {
                num += s[i];
                if(i < len-1) continue;
            }
            if (s[i] == ' ' || i == len - 1) {
                tmp = stoll(num);
                for(int j = 0; j < 6; j++) {
                    if (times[j]) {
                        sum += (tmp * scs[j]) % MOD;
                        sum %= MOD;
                        times[j] = 0;
                        num = "";
                        break;
                    }
                }
                continue;
            }
            for(int j = 0; j < 6; j++) {
                if (s[i] == asc[j]) {
                    times[j] = 1;
                    break;
                }
            }
        }
        cout << sum << endl;
    }

    return 0;
}
