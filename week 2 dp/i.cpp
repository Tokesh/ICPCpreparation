#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>dp(n+5, -1);
    dp[0]=1;
    dp[1]=3;
    for(int i=2;i<=n;i++){
        dp[i] = 3*dp[i-1] - dp[i-2];
    }
    cout << dp[n];
    return 0;
}