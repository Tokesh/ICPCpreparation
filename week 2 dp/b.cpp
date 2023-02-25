#include <iostream>
#include <vector>
using namespace std;
int main(){
    
    int n;
    cin >> n;
    string k;
    cin >> k;
    vector<int>dp(1010,0);
    dp[0] = 0;
    for(int i=0;i<n;i++){
        if(k[i+1] =='w' && k[i+3] == 'w' && k[i+5] == 'w'){
            dp[i] = INT_MIN;
        }
        if(k[i+1] == '"') dp[i+1]=max(dp[i+1], dp[i]+1);
        if(k[i+3] == '"') dp[i+3]=max(dp[i+3], dp[i]+1);
        if(k[i+5] == '"') dp[i+5]=max(dp[i+5], dp[i]+1);
    }
    if(dp[n-1] < 0) cout << -1;
    else cout << dp[n-1];
    return 0;
}