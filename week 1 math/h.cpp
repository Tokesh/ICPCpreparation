#include <iostream>
using namespace std;

int gcd (int a, int b) {
	if (b == 0) return a;
	return gcd (b, a % b);
}

int main(){
    int x,y;
    cin >> x >> y;
    // gcd(x,y) != 1 -> no solution
    // (x0 +kb; y0-ka)
    // x0+kb>0
    // k*b >= x0
    // k >= x0/b
    // ceil(k)
    //расширенный алгоритм евклида
    cout << gcd(x,y);
    return 0;
}