#include <iostream>
using namespace std;
void gen(string s, int i){
    if(i == s.size()){
        for(int i=0;i<s.size();i++){
            cout << s[i] << ' ';
        }
        cout << endl;
        return;
    }
    s[i] = '0';
    gen(s,i+1);
    s[i]='1';
    if(i==0 || s[i-1] != '1'){
        gen(s,i+1);
    }
}
int main(){
    int n;
    cin >> n;
    string s = "";

    for(int i=0;i<n;i++){
        s += ' ';
    }
    gen(s,0);

    return 0;
}