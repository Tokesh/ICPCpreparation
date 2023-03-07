#include <bits/stdc++.h>
using namespace std;

vector<bool>p(1000006,0);
void erath(){
    p[0]=1;
    p[1]=1;
    for(int i=2;i*i <= 1000006;i++){
        if(p[i] == 0){
            for(int j=i*i;j<1000006;j+=i){
                p[j] = 1;
            }
        }
    }
}


long long pochti(long long h){
    long long ans = 0;
    for(long long int i=2;i*i <= h;i++){
        if(p[i] == 0){
            long long x = i*i;
            while(x <= h){
                ans++;
                x *= i;
            }
        }
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    erath();
    int q;
    long long int l,h;
    cin >> q;
    while(q--){
        cin >> l >> h;

        cout << pochti(h) - pochti(l-1) << endl;
    }
    return 0;
}