#include <iostream>
using namespace std;
int main(){
    //Add infinity, dp[1] = ?
    int n;
    cin >> n;
    int x[n];
    for(int i=0;i<n;i++){
        cin >> x[i];
    }
    int dp[n];
    dp[0] = 0;
    dp[1] = 0;
    for(int i=2;i<=n;i++){
        dp[i] = abs(x[i]-x[i-1]) + min(dp[i-1],dp[i-2]);
    }
    cout << dp[n];
    return 0;
}