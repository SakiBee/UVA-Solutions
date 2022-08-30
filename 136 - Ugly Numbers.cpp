https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=72

#include <bits/stdc++.h>
//#include<dbg.h>
using namespace std;
#define int long long

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  int a, b, c;
  int ugly[1501];
  int _a, _b, _c, n = 1, mn;
  ugly[1] = a = b = c = 1;
  while(n <= 1500) {
    _a = 2*ugly[a];
    _b = 3*ugly[b];
    _c = 5*ugly[c];
    mn = min({_a, _b, _c});
    ugly[++n] = mn;
    if(mn == _a) a++;
    if(mn == _b) b++;
    if(mn == _c) c++;
  }
  cout << "The 1500'th ugly number is " << ugly[1500] << "." << endl;
}
