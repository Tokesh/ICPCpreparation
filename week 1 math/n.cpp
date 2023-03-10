#include <iostream>
#include <vector>
using namespace std;
vector<long long >p(10005);
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
    p[1] = phi(1);
    for(int i=2;i<=10000;i++){
        p[i] = p[i-1] + phi(i);
    }
    int t;
    while(n--){
        cin >> t;
        cout << p[t] * p[t] << endl;
    }
    return 0;
}