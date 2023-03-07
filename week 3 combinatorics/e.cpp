#include <iostream>
#include <vector>
using namespace std;

int n, k;
void gen(vector<int>start, vector<int>&v, int s){
    if(k==v.size()){
        for(int i=0;i<k;i++){
            cout << v[i] << ' ';
        }
        cout << endl;
        return;
    }
    for(int i=s;i>=1;i--){
        
        v.push_back(start[i]);
        gen(start, v, i-1);
        v.pop_back();
    }
}

int main(){
    cin >> n >> k;
    vector<int>temp, start(n+2);
    for(int i=1;i<=n;i++){
        start[i] = i;
    }
    gen(start,temp,n);
    return 0;
}