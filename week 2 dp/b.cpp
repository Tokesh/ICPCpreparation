#include <bits/stdc++.h>
using namespace std;
vector<int> dp(1e6, -1);
vector<int> arr(1e6,0);
int main() {
    freopen("lepus.in", "r", stdin);
    freopen("lepus.out", "w", stdout);
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++) {
        if(s[i] == '"') arr[i+1]=1;
        else if(s[i] == 'w') arr[i+1] = -1;
        else arr[i + 1] = 0;
    }
    dp[1] = arr[1];
    for (int i = 2; i <= n; i++) {
        if (arr[i] != -1) {
            int mx = -1e9;
            if (i - 1 >= 1 and dp[i - 1] != -1) mx = max(mx, dp[i - 1]); 
            if (i - 3 >= 1 and dp[i - 3] != -1) mx = max(mx, dp[i - 3]); 
            if (i - 5 >= 1 and dp[i - 5] != -1) mx = max(mx, dp[i - 5]);
            if (mx == -1e9) {
                dp[i] = -1;
            }
            else 
                dp[i] = arr[i] + mx; 
        }
    }
    cout << dp[n];
    return 0;
}