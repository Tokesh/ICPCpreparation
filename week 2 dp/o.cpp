#include <bits/stdc++.h>
using namespace std;
int main(){
    string arr1;
    cin >> arr1;
    int n = arr1.size();

    string arr2;
    cin >> arr2;
    int m = arr2.size();
    
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
    
    int indexi = dp[n][m];
    int i=n,j=m;
    string k = "";
    while(i > 0 && j > 0){
        if(arr1[i-1] == arr2[j-1]){
            k.push_back(arr1[i-1]);
            i--;
            j--;
            indexi--;
        }
        else if(dp[i-1][j] > dp[i][j-1]){
            i--;
        }else{
            j--;
        }
    }
    reverse(k.begin(),k.end());
    cout << k;
    return 0;
}