#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    vector <int> dp(300005 + 1, 300005);
    dp[0] = 0;
    for (int i = 1; i < dp.size(); i++) {
        int s1 = 0, s2 = 0;
        for (int j = 1; ; j++) {
            s1 += j;
            s2 += s1;
            //cout << i << ' ' << j << ' ' << s2 << endl;
            if (i >= s2) dp[i] = min(dp[i], dp[i - s2] + 1);
            else break;
        }
    }
    /* for(int i=1;i<15;i++){
        cout << i << ' ' << a[i] << endl;
    } */
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int m;
        cin >> m;
        cout << dp[m] << endl;
    }
}