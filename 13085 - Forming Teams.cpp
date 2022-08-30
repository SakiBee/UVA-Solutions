https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=4983#include <bits/stdc++.h>
//#include<dbg.h>
using namespace std;
#define  ll  long long
#define  int ll

const int N = 1e6+7, mod = 1e9 + 7;

int f[N], invf[N];


int bigMod(long long n, long long k, int mod) {
  int ans = 1 % mod; n %= mod; if (n < 0) n += mod;
  while (k) {
    if (k & 1) ans = (long long) ans * n % mod;
    n = (long long) n * n % mod;
    k >>= 1;
  }
  return ans;
}

void precal() { // declare in main function
  f[0] = 1;
  for (int i = 1; i < N; i++) {
    f[i] = 1LL * i * f[i - 1] % mod;
  }
  invf[N - 1] = bigMod(f[N - 1], mod - 2, mod);
  for (int i = N - 2; i >= 0; i--) {
    invf[i] = 1LL * invf[i + 1] * (i + 1) % mod;
  }
}

int mulMod (int a, int b) {
	return ((a % mod) * (b % mod)) % mod;
}
int cal(int n, int a, int b) {
	int ret = mulMod(f[n] , invf[b]);
	return mulMod(ret, bigMod(invf[a], b, mod));
}

int add(int a, int b) {
	return ((a % mod) + (b % mod)) % mod;
}

void solve () {
	int n; cin >> n;
	int sum = 0LL;
	for (int i = 1; i * i <= n; i++) {
		if(n % i == 0) {
			sum = add(sum, cal(n, i, n/i));
			if(i != n/i) sum = add(sum, cal(n, n/i, i));
		}
	}
	cout << sum << endl;
}

int32_t main () {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  ll tc, t = 0; 
  precal();
  cin >> tc; while(tc --){
  	cout << "Case " << ++t << ": ";
      solve();
    }
}

