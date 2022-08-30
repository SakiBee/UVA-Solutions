https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1391


#include <bits/stdc++.h>
//#include<dbg.h>
using namespace std;
#define int long long
const int N = 1e5+7;

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  vector<int> v(N);
  v[1] = 2;
  v[2] = 3;
  for (int i = 3; i < N; i++) v[i] = v[i-1] + v[i-2];
  int tc, t = 0; 
  cin >> tc;
  while(tc--) {
    int n; cin >> n;
    cout << "Scenario #" << ++t << ":\n" << v[n] << "\n\n";
  }
}


