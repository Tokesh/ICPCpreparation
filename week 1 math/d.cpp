#include <iostream>
using namespace std;

int gcd (int a, int b) {
	if (b == 0) return a;
	return gcd (b, a % b);
}

int main(){
    int n;
    cin >> n;
    int cnt = 0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            //cout <<i << ' ' << gcd(i,j) << endl;
            if(i == gcd(i,j)){
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}