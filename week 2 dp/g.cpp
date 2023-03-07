#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>g;
vector<int>dp;
vector<bool>visited;
void dfs(int node){
    visited[node] = true;
 
    for (int i = 0; i < g[node].size(); i++) {
        if (!visited[g[node][i]])
            dfs(g[node][i]);
 
        dp[node] = max(dp[node], 1 + dp[g[node][i]]);
    }
}

int main(){
    freopen("longpath.in", "r", stdin);
    freopen("longpath.out", "w", stdout);
    int n,m,x,y;
    cin >> n >> m;
    g = vector<vector<int>>(n+5, vector<int>());
    for(int i=0;i<m;i++){
        cin >> x >> y;
        g[x].push_back(y);
    }
    dp = vector<int>(n+5,0);
    visited = vector<bool>(n+5,false);
 
    for (int i = 1; i <= n; i++) {
        if (!visited[i])
            dfs(i);
    }
 
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        ans = max(ans, dp[i]);
    }
    cout << ans;
    return 0;
}