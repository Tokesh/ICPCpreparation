#include <iostream>

using namespace std;

int f[100000];

int fib1(int n){
    if (n == 0||n==1){
        return 1;
    }
    return fib1(n-1)+fib1(n-2);
}


int fib2(int n){
    f[0]=1;
    f[1]=1;
    for(int i=2;i<=n;i++){
        f[i] = f[i-1] + f[i-2];
    }
    return f[n];
}

int main(){
    return 0;
}