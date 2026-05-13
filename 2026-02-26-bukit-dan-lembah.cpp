#include <bits/stdc++.h>

using namespace std;
// 1, 5, 3, 10, 9   
// 1, 3, 5, 10, 9
// 10 5 20 30 2 1 12 20
int main() {
    int s, peak = -1, low = -1, prevNum, bigDiff = INT_MIN;
    int state = 0; // 0 for not initialized, 1 for rising, 2 for falling or flat
    while(cin >> s) {
        if(peak == -1) {
            low = peak = prevNum = s;
            continue;
        }
        if(!state) {
            if(s > prevNum) {
                state = 1;
            } else {
                state = 2;
            }
            bigDiff = max(bigDiff, abs(s - peak));
            continue;
        }
        if(state == 1) {
            if(prevNum > s) {
                state = 2;
                bigDiff = max(bigDiff, abs(peak  - low));
            } else {
                peak = s;
            }
        } else {
            if(prevNum < s) {
                state = 1;
                bigDiff = max(bigDiff, abs(peak - prevNum));
                peak = s;
            }
        }
        prevNum = s; 
    }
    cout << bigDiff << endl;
    
    return 0;
}