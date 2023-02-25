#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<bool>p(1e7+5, 0);
    long long int a,b, start;
    while(cin >> a >> b){
        for(int i=2;i*i<=b;i++){
            if(p[i] == 0){
                start = i*i;
                while(start <= b){
                    p[start] = 1;
                    start += i;
                }
            }
        }
        long long int cnt = 0;
        if(a < 2) start = 2;
        else start = a;
        for(int i=start;i<=b;i++){
            if(p[i] ==0) cnt++;
        }
        cout << cnt << endl <<endl;
    }
    
    return 0;
}