#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>& nums) {
    vector<int> res;
    for(int i=0; i<nums.size(); i++) {
        auto it = lower_bound(res.begin(), res.end(), nums[i]);
        if(it==res.end()) res.push_back(nums[i]);
        else *it = nums[i];
    }
    return res.size();
}

int main(){
    int n;
    while(cin >> n){
        vector<int>arr(n+5,0);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout << solve(arr) << endl;
    }
    return 0;
}