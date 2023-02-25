#include <iostream>
using namespace std;
long long int gcd(int a,int b){
    if(b == 0) return a;
    return gcd(b,a%b);
}
int main(){
    long long int n,cnt;
    while(cin >> n){
        if(n == 0) return 0;
        cnt = n;
        for(int i=1;i*i<=n;i++){
            if(gcd(n,i)==1){
                cnt--;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}