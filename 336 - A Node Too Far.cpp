https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=272

#include <bits/stdc++.h>
using namespace std;
#define     ll     long long
const int N = 20000;
int main () {
  //ios_base::sync_with_stdio(false); cin.tie(NULL);
  int tc, t = 0;
  while(cin >> tc, tc != 0) {
    int a, b, c, d;
    map<int, vector<int> > g;
    for (int i = 0; i < tc; i++) {
      cin >> a >> b;
      g[a].push_back(b);
      g[b].push_back(a);
    }
    
    while (cin >> c >> d) {
      if(c == 0 and d == 0) break;
      map<int, int> dis;
      queue<int> q;
      q.push(c);
      dis[c] = 0;
      int ans = 1;
      while(!q.empty()) {
        int p = q.front();
        q.pop();
        for (size_t i = 0; i < g[p].size(); i++) {
          int u = g[p][i];
          if (!dis.count(u)) {
            dis[u] = dis[p] + 1;
            if(dis[u] <= d) {
              ans++;
              q.push(u);
            }
            
          }
        }
      }
      cout << "Case " << ++t << ": " << g.size() - ans << " nodes not reachable from node " << c << " with TTL = " << d << ".\n";
    }
  }
}
