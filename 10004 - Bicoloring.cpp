https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=945


#include <bits/stdc++.h>
using namespace std;
#define     ll     long long

const int N = 5e3 + 7;
vector <int> g[N];
bool ok = 1, vis[N];
int color[N];
void dfs (int n) {
  vis[n] = 1;
  for (auto u : g[n]) {
    if(!vis[u]) {
      color[u] = color[n] ^ 1;
      dfs(u);
    }
    else {
      if(color[u] == color[n]) ok = 0;
    }
  }
}

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int t;
  while (cin >> t) {
    memset(vis, 0, sizeof(vis));
    memset(color, 0, sizeof(color));
    if(t == 0) break;
    int n, a, b, c; cin >> n;
    for (int i = 1; i <= n; i++) {
      cin >> a >> b;
      g[a].push_back(b);
      g[b].push_back(a);
    }
    ok = 1;
    for (int i = 1; i <= n; i++) {
      if(!vis[i]) dfs(i);
    }
    if(ok) cout << "BICOLORABLE.\n";
    else cout << "NOT BICOLORABLE.\n";
    for (int i = 0; i <= n; i++) g[i].clear();
  }
  
}
