#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int> > ans;
vector<int>start;
vector<int>temp;
void gen(vector<int>start, vector<int>&v, int n, int k){
    //cout << v.size() << ' ' << n << endl;
    if(n==0){
        ans.push_back(v);
        return;
    }
    if(n < 0) return;
    for(int i=k;i<start.size();i++){
        v.push_back(start[i]);
        gen(start,v, n-start[i], i+1);
        v.pop_back();
    }
}

int main(){
    
    int target, nums;
    while(cin >> target >> nums){
        ans.clear();
        temp.clear();
        start = vector<int>(nums);
        
        for(int i=0;i<nums;i++){
            cin >> start[i];
        }
        sort(start.begin(), start.end(), greater<>());
        gen(start, temp, target,0);
        cout << "Sums of " << target << ':' << endl;
        if(ans.size() == 0) cout << "NONE" << endl;
        for(int i=0;i<ans.size();i++){
            if(i!=0 && ans[i] == ans[i-1]) continue;
            for(int j=0;j<ans[i].size();j++){
                if(j != ans[i].size()-1) cout << ans[i][j] << '+';
                else cout << ans[i][j];
            }
            cout << endl;
        }
        
    }
    return 0;
}