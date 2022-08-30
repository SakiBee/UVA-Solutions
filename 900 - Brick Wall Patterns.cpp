https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=841

#include <bits/stdc++.h>
//#include<dbg.h>
using namespace std;
#define int long long

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  vector<int>v(55);
  v[1] = 1;
  v[2] = 2;
  for (int i = 3; i < 55; i++) v[i] = v[i-1] + v[i-2];
  while(1) {
    int n; cin >> n;
    if(n == 0) break;
    cout << v[n] << endl;
  }
}
