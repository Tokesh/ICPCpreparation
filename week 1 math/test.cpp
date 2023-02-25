#include <bits/stdc++.h>

using namespace std;
#define MAX 10001
long long fi[MAX], sum[MAX];
void FillEuler(){
  int i, j;
  for (i = 0; i < MAX; i++) fi[i] = i;
  for (i = 2; i < MAX; i++)
    if (fi[i] == i)
      for (j = i; j < MAX; j += i)
        fi[j] -= fi[j] / i;
}
int main(){
    int n;
    sum[0] = 0; sum[1] = 1;
    FillEuler();
    for(int i = 2; i < MAX; i++)
      sum[i] = sum[i-1] + fi[i];
    
    int res;
    int tests;
    cin >> tests;
    while(tests--){
        cin >> n;
        res = sum[n] * sum[n];
        printf("%lld\n",res);
    }
    

}