https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=305

#include <bits/stdc++.h>
//#include<dbg.h>
using namespace std;
#define ll long long
#define int long long

int32_t main () {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  ll n, r;
  while(1) {
    cin >> n >> r;
    if(n == r and n == 0) break;
    cout << n << " things taken " << r << " at a time is ";
    int p = n - r, ans = 1, q = 2;
    
    for (int i = p+1; i <= n; i++) {
      ans *= i;
      if(q <= r and ans % q == 0) ans /= q, q++;
    }
    cout << ans << " exactly.\n";   
  }
}



