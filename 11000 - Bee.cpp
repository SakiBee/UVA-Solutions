https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1941

#include <bits/stdc++.h>
//#include<dbg.h>
using namespace std;
#define  ll  long long
#define  int ll
const int N = 1e4+5;

int dpm[N], dpf[N];

void precal() {
  dpm[0] = 0;
  dpf[0] = 1;
  for (int i = 1; i < N; i++) {
    dpf[i] = dpm[i-1] + 1;
    dpm[i] = dpm[i-1] + dpf[i-1];
  }
}

int32_t main () {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  precal();
  int n;
  while(1) {
    cin >> n;
    if(n == -1) break;
    cout << dpm[n] << " " << dpm[n]+dpf[n] << endl;
  }
}

