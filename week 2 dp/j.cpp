#include <bits/stdc++.h>


using namespace std;

int main(){
    int n;
    cin >> n;
    int dp[n+5];
    int a[n+5];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    dp[0] = 0;
    dp[1] = abs(a[1]-a[0]);
    int x,y;
    for(int i=2;i<n;i++){
        x = abs(a[i]-a[i-1]) + dp[i-1];
        y = abs(a[i]-a[i-2]) + dp[i-2];
        dp[i] = min(x,y);
    }
    cout << dp[n-1];
    return 0;
    //1 2 4 5 10 12
    //5,10,15,-1,20
}