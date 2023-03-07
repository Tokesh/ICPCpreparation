#include <iostream>
using namespace std;



int phi (long long int n) {
	long long int result=n;
	for (int i=2; i*i<=n; ++i)
		if (n % i == 0) {
			while (n % i == 0)
				n /= i;
			result -= result / i;
		}
	if (n > 1)
		result -= result / n;
    return result;
}
int main(){
    long long int n, ans= 0;
    cin >> n;
    for(int i=2;i<=n;i++){
        ans += phi(i);
    }
    cout << ans;

    //gcd(a,b) == 1 -> phirma(a*b) = phirma(a)*phirma(b);   
    
    return 0;
}