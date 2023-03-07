#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n+5][n+5];
    int dp[n+5][n+5];
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cin >> arr[i][j];
        }
    }
    dp[0][0]=arr[0][0];
    for(int i=1;i<n;i++){
        for(int j=0;j<=i;j++){
            if(j!=0 && j!=i){
                dp[i][j] = arr[i][j] + max(dp[i-1][j-1],dp[i-1][j]);
            }else if(j == 0){
                dp[i][j] = arr[i][j] + dp[i-1][j];
            }else if(j == i){
                dp[i][j] = arr[i][j] + dp[i-1][j-1];
            }
        }
    }
    int maxi = -2147483648;
    for(int i=0;i<n;i++){
        maxi = max(maxi, dp[n-1][i]);
    }
    cout << maxi;
    return 0;
}