https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=513

#include <bits/stdc++.h>
using namespace std;
#define     ll     long long
const int N = 507;
bool vis[N][N];
vector <string> g(N);
int n, m;
bool valid (int i, int j) {
  if(i >= 0 and j >= 0 and i < n and j < m and !vis[i][j] and g[i][j] != '*') return 1;
  return 0;
}

void dfs (int i, int j) {
  vis[i][j] = 1;
  if(valid(i+1, j)) dfs(i+1, j);
  if(valid(i+1, j+1)) dfs(i+1, j+1);
  if(valid(i+1, j-1)) dfs(i+1, j-1);
  if(valid(i-1, j)) dfs(i-1, j);
  if(valid(i-1, j+1)) dfs(i-1, j+1);
  if(valid(i-1, j-1)) dfs(i-1, j-1);
  if(valid(i, j-1)) dfs(i, j-1);
  if(valid(i, j+1)) dfs(i, j+1);
}

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  while(cin >> n >> m, m != 0) {
    memset(vis, 0, sizeof(vis));
    g.clear(); g.resize(n);
    for (int i = 0; i < n; i++) cin >> g[i];
    int ans = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if(g[i][j] != '*' and !vis[i][j]) {
          ans++;
          dfs(i,j);
        }
      }
    }
    cout << ans << endl;    
  }
}
