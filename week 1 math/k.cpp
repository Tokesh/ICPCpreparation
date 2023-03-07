#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned int a,b;
    unsigned int c, temp;
    while (cin >> a >> b >> c) {
        temp = a;
        b *= a;
        b %= c;
        while(b--){
            temp += a;
            temp %= c;
        }
        cout << temp << endl;
    }
    return 0;
}
//unsigned long long int;