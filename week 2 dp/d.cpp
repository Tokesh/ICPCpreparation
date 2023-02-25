#include <iostream>


using namespace std;

int main(){
    int n=8,m=8;
    int arr[n+5][m+5];
    int dp[n+5][m+5];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }
    int ta, tb;
    arr[0][0] = 1;
    for(int i=7;i<n;i++){
        for(int j=0;j<m;j++){
            ta = 0;
            tb = 0;
            if(i-2 >=0 && j-1 >= 0) ta = dp[i-2][j-1];
            if(i-1 >=0 && j-2 >= 0) tb = dp[i-1][j-2];
            dp[i][j] = arr[i][j] + min(ta,tb);
        }
    }
    cout << dp[n-1][m-1];
    return 0;
}