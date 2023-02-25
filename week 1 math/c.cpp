#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    int cnt, ans=1;
    for(int i=2;i<=sqrt(n);i++){
        if(n % i == 0){
            cnt = 0;
            while(n % i ==0){
                cnt++;
                n/=i;
            }
            ans *= cnt+1;
        }
    }
    if(n > 1) ans *= 2;
    cout << ans - 2;
    return 0;
}