#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>arr(n+5);
    vector<int>dp(n+5,1);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int res = 0;
    for(int i=0;i<n;i++){
        for(int j=i;j>=0;j--){
            if(arr[i] > arr[j]){
                dp[i] = max(dp[i], dp[j]+1);
                res = max(res,dp[i]);
            }
        }
    }
    cout << res;
    return 0;
}