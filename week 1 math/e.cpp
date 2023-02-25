#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<bool>p(1e6, 0);
    int a,b, start;
    cin >> a >> b;
    for(int i=2;i*i<=b;i++){
        if(p[i] == 0){
            start = i*i;
            //cout << i << ' ' << start << endl;
            while(start <= b){
                p[start] = 1;
                start += i;
                //cout << "Here " << start << endl;
            }
        }
    }
    for(int i=max(2,a);i<=b;i++){
        if(p[i] == 0) cout << i << ' ';
    }
    return 0;
}