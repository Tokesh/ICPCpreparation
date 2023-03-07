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
    long long int n;
    cin >> n;
    while(true){
        if(n == 0) break;
        cout << phi(n) << endl;
        cin >> n;
    }
    //gcd(a,b) == 1 -> phirma(a*b) = phirma(a)*phirma(b);   
    
    return 0;
}