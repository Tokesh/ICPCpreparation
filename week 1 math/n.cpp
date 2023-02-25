#include <iostream>
#include <vector>
using namespace std;

vector<int>arr(1e4,0);
void phi (int n) {
	int result;
    arr[0] = 0;
    arr[1] = 1;
	for (int i=2; i*i<=n; ++i)
		if (n % i == 0) {
			while (n % i == 0)
				n /= i;
			result -= result / i;
            cout << n << endl;
            arr[i] = arr[i-1] + result;
		}
	if (n > 1)
		result -= result / n;
}

int main(){
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        phi(10000);
        //cout << arr[3] << endl;
        //cout << arr[n] * arr[n] << endl;

    }
    return 0;
}