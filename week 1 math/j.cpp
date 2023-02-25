#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    string k="";
    while(n > 1){
        if(n % 2 == 0){
            k += "S";
            n /= 2;
        }else{
            k += "X";
            n -= 1;
        }
    }
    //cout << n;
    reverse(k.begin(),k.end());
    cout << k;
    return 0;
}