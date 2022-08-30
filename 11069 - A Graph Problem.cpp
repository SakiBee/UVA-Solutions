https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2010


#include <bits/stdc++.h>
//#include<dbg.h>
using namespace std;
#define int long long
const int N = 107;

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  vector<int> v(N);
  v[1] = 1;
  v[2] = 1;
  v[3] = 1;
  for (int i = 4; i < N; i++) v[i] = v[i-3] + v[i-2];
  int tc, n;
  while(cin >> n) {
    cout << v[n] + v[n-1] << endl;
  }
}
