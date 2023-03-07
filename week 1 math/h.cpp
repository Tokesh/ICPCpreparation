#include <iostream>
#include <math>
using namespace std;

int gcd (int a, int b, int & x, int & y) {
	if (a == 0) {
		x = 0; y = 1;
		return b;
	}
	int x1, y1;
	int d = gcd (b%a, a, x1, y1);
	x = y1 - (b / a) * x1;
	y = x1;
	return d;
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