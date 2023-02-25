#include <bits/stdc++.h>
using namespace std;

unsigned int binpows(long long int a, long long int n, long long int c){
    if (n == 0) return 1;
    if (n == 1) return a;
    unsigned int x = binpows(a,n/2, c)%c;
    if(n % 2 == 0){
        return (x*x) % c;
    }
    return a*x*x;
}
long long int numModString(string num, long long c){
    long long int res=0;
     
    for(int i=0;i<num.size();i++){
        res=(res*10+num[i]-'0')%c;
    }
    return res;
}

long long int previewBinPow(string a, string b, long long c){
    long long int ax = numModString(a,c);
    long long int bx = numModString(b,c);
    cout << ax << ' ' << bx << endl;
    return binpows(ax,bx, c); 
}


int main(){
    string a,b;
    long long c;
    while (cin >> a >> b >> c) {
        cout << previewBinPow(a,b,c)<< endl;
    }
    return 0;
}
//unsigned long long int;