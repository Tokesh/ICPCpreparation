#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long int n,k;
    int a;
    bool ok;
    cin >> k;
    while(k--){
        cin >> n;
        ok = false;
        for(int i = 2;i <= sqrt(2*n);i++){
            if(2 * n % i == 0){
                a = (2*n)/i + 1 - i;
                if(a % 2 == 0){
                    a /= 2;
                    cout << n << " = " << a;
                    for(int j = 1;j < i;j++){
                        cout << " + " << a+j;
                    }
                    cout << endl;
                    ok = true;
                    break;
                }
            }
        }
        if(ok == false) cout << "IMPOSSIBLE" << endl;
    }
    
    return 0;
}