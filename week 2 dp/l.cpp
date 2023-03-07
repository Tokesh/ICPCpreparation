#include <bits/stdc++.h>
using namespace std;
vector<int>dp;
int solve(int n){
    if (n == 1) return 1;
    if (dp[n] != -1) return dp[n];
    int res = 1e6;
    for(int i = 2; i * i <= n; i++){
        if (n % i == 0) res = min(res,solve(i) + solve(n/i));
    }
    for(int i = 1; i <= n / 2; i++){
        res = min(res,solve(i) + solve(n - i));
    }
    return dp[n] = res;
}

int main(){
    int n;
    cin >> n;
    dp = vector<int>(n+5,-1);
    cout << solve(n);
    return 0;
}