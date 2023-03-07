#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>>res;
int n, k;
void gen(vector<int>start, vector<int>&v, int s){
    if(k==v.size()){
        res.push_back(v);
        /* for(int i=0;i<k;i++){
            cout << v[i] << ' ';
        }
        cout << endl; */
        return;
    }
    for(int i=s;i<=n;i++){
        
        v.push_back(start[i]);
        gen(start, v, i+1);
        v.pop_back();
    }
}

int main(){
    int p;
    cin >> n >> k >> p;
    vector<int>temp, start(n+2);
    for(int i=1;i<=n;i++){
        start[i] = i;
    }
    gen(start,temp,1);
    
    for(int i=0;i<k;i++){
        cout << res[p][i] << ' ';
    }
    return 0;
}