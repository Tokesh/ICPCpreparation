#include <bits/stdc++.h>

using namespace std;


int main(){
    freopen("king2.in", "r", stdin);
    freopen("king2.out", "w", stdout);
    int n=8,m=8;
    int arr[n+5][m+5];
    vector<vector<int>>dp(n+5,vector<int>(m,INT_MAX));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }
    dp[7][0]=arr[7][0];
    for(int i=7;i>=0;i--){
        for(int j=0;j<m;j++){
            if(i-1 >=0) dp[i-1][j] = min(dp[i-1][j], dp[i][j]+arr[i-1][j]);
            if(j+1 < 8) dp[i][j+1] = min(dp[i][j+1], dp[i][j]+arr[i][j+1]);
            if(i-1 >=0 && j+1 < 8) dp[i-1][j+1] = min(dp[i-1][j+1], dp[i][j]+arr[i-1][j+1]);
        }
    }
    /* for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << dp[i][j] << ' ';
        }
        cout << endl;
    } */
    cout << dp[0][m-1];
    return 0;
}