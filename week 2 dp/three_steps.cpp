#include <iostream>

using namespace std;

int main(){
    //{A,B,C}^n
    int n;
    cin >> n;

    int dp[n];
    dp[0] = 1;
    dp[1] = 3;
    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1]*2 + 2*dp[i-2];
    }
    cout << dp[n];
    return 0;
}