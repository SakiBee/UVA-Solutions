https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3368


#include <bits/stdc++.h>
using namespace std;
#define     ll     long long

const int mod = 100000007;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll n, m, k, tc = 0; 
    while (cin >> n >> m >> k){
        if(n == 0 and m == 0 and k == 0) break;
        ll t = 1ll, t1 = 1ll,cnt;
        for (int i = 2; i*i <= n; i++) {
            cnt = 0ll;
            if(n % i == 0) {
                while (n % i == 0) {
                    n /= i;
                    cnt ++;
                }
                cnt *= m;
                t = (t * (cnt / k + 1)) % mod;
                t1 = (t1 * (cnt / (k + 1) + 1)) % mod;
            }
        }
        if(n > 1) {
            t = (t * (m / k + 1)) % mod;
            t1 = (t1 * (m / (k + 1) + 1)) % mod;
        }
        cout << "Case " << ++tc << ": " << (t - t1 + mod)%mod << endl;
    }
}   
