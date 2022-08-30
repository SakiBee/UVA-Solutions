https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1425


#include <bits/stdc++.h>
//#include<dbg.h>
using namespace std;
#define  ll  long long
#define  int ll


int32_t main () {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  int n, a;
  while(1) {
    cin >> n >> a;
    if(n == 0 and a == 0) break;
    a = abs(a);
    map<int, int>fr;
    for (int i = 2; i <= n; i++) {
      int p = i;
      for (int j = 2; j * j <= p; j++) {
        while(p % j == 0) fr[j]++, p /= j;
      }
      if(p > 1) fr[p]++;
    }

    for (int i = 2; 1LL * i*i <= a; i++) {
      while(a % i == 0) fr[i]--, a /= i;
    }
    if(a > 1) fr[a]--;
    int ans = 1LL;
    bool ok = 1;
    for (auto u : fr) {
      if(u.second < 0) {
        cout << 0 << endl;
        ok = 0;
        break;
      }
      ans *= 1LL * (u.second + 1);
    }
    if(ok) cout << ans << endl;
  }
}

