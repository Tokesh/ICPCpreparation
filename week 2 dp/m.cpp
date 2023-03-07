#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int arr[n+5][m+5];
    int dp[n+5][m+5];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }
    dp[0][0] = arr[0][0];
    for(int i=1;i<m;i++){
        dp[0][i] = arr[0][i] + dp[0][i-1];
    }
    for(int i=1;i<n;i++){
        dp[i][0] = arr[i][0] + dp[i-1][0];
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            dp[i][j] = dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1] + arr[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << dp[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}