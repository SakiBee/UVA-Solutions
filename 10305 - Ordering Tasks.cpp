https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1246


#include <bits/stdc++.h>
using namespace std;
#define     ll     long long

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, m, a, b;
    while (cin >> n >> m) {
      if(n == 0 and m == 0) break;
      vector<int>g[110], ans;
      int indg[n+1], vis[n+1];
      memset(indg, 0, sizeof(indg));
      memset(vis, 0, sizeof(vis));
      for (int i = 0; i < m; i++) {
        cin >> a >> b;
        indg[b]++;
        g[a].push_back(b);
      }
      while (ans.size() < n) {
        int tm = 0;
        for (int i = 1; i <= n; i++) {
          if(!vis[i] and indg[i] == 0) {
            tm = i;
            break;
          }
        }
        vis[tm] = 1;
        ans.push_back(tm);
        for (auto u: g[tm]) indg[u]--;
      }
    for (auto u: ans) cout << u << " ";
    cout << '\n';
    }
}


