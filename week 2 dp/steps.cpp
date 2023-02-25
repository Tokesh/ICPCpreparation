#include <bits/stdc++.h>


using namespace std;

int main(){
    freopen("ladder.in", "r", stdin);
    freopen("ladder.out", "w", stdout);


    //Состояние, значения, база, переходы
    int n;
    cin >> n;
    int dp[n+5];
    int a[n+5];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    dp[0] = a[0];
    dp[1] = max(a[1], a[1] + a[0]);
    for(int i=2;i<n;i++){
        dp[i] = a[i] + max(dp[i-1],dp[i-2]);
    }
    cout << dp[n-1];
    return 0;
    //1 2 4 5 10 12
    //5,10,15,-1,20
}