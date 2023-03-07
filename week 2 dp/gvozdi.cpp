#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    //Add infinity, dp[1] = ?
    int n;
    cin >> n;
    int x[n];
    for(int i=0;i<n;i++){
        cin >> x[i];
    }
    sort(x, x+n);
    int dp[n];
    dp[0] = 2147483647;
    dp[1] = x[1]-x[0];
    for(int i=2;i<n;i++){
        dp[i] = abs(x[i]-x[i-1]) + min(dp[i-1],dp[i-2]);
    }
    /* for(int i=0;i<n;i++){
        cout << x[i] << ' ' ;
    }
    cout << endl; */
    cout << dp[n-1];
    return 0;
}