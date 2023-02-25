#include <iostream>
using namespace std;

long long binpow(int a, int n){
    if (n == 0) return 1;
    if (n == 1) return a;
    long long int x = binpow(a,n/2);
    if(n % 2 == 0){
        return (x*x);
    }
    return a*x*x;
}

int main(){
    return 0;
}