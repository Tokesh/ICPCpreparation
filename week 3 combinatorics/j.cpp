#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void gen(vector<int>&v, int n){
    //cout << v.size() << ' ' << n << endl;
    if(n==0){
        for(int i=0;i<v.size();i++){
            cout << v[i] << ' ';
        }
        cout << endl;
        return;
    }
    if(n < 0) return;
    for(int i=1;i<=n;i++){
        v.push_back(i);
        gen(v, n-i);
        v.pop_back();
    }
}

int main(){
    int n;
    cin >> n;
    vector<int>temp;
    gen(temp, n);
    return 0;
}