#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr1[n+5];
    for(int i=0;i<n;i++){
        cin >> arr1[i];
    }

    int m;
    cin >> m;
    int arr2[m+5];
    for(int i=0;i<m;i++){
        cin >> arr2[i];
    }
    
    vector<vector<int>>dp(n+5,vector<int>(m+5,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i]==arr2[j]){
                dp[i+1][j+1] += dp[i][j]+1;
            }else{
                dp[i+1][j+1] = max(dp[i+1][j], dp[i][j+1]);
            }
        }
    }
    cout << dp[n][m];
    return 0;
}