#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main(){
    freopen("inverse.in", "r", stdin);
    freopen("inverse.out", "w", stdout);
    int n;
    cin >> n;
    vector<int>arr(n);
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
        ans[arr[i]-1] = i+1;
    }
    for(int i=0;i<n;i++){
        cout << ans[i] << ' ' ;
    }

}