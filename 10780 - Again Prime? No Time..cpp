https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1721



#include <bits/stdc++.h>
using namespace std;
#define     run             ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define     ll              long long
#define     ull             unsigned long long
#define     bll             __int128
#define     gcd(a,b)        __gcd(a,b)
#define     lcm(a,b)        (a/__gcd(a,b))*b
#define     vll             vector<ll>
#define     pr              pair<ll,ll>
#define     v_pr            vector<pair<ll,ll>>
#define     v_ppr            vector<pair<pair<ll,ll>,ll>>
#define     all(x)          x.begin(),x.end()
#define     reall(x)        x.rbegin(),x.rend()
#define     eb              emplace_back
#define     pb              push_back
#define     F               first
#define     S               second
#define     fori(i,b,e)     for(ll (i)=(b); (i) <= (e); (i)++)
#define     for0(i,n)       for(ll (i)=0; (i) < (n); (i)++)
#define     forrv(i,b,e)    for(int i=b;i>=e;i--)
#define     sp(a)           fixed<<setprecision(a)
#define     endl            '\n'
#define     yes             cout << "Yes" << '\n'
#define     no              cout << "No" << '\n'

const ll N = 5e4 + 9;
const ll M = 5e5 + 9;
vector <ll> primes;
bool prime[M];
void sieve(){
    prime[1] = true;
    for(ll i = 2; i*i <= M-9; i++) if(!prime[i]){
        for(ll j = i*i; j <= M-9; j+=i) prime[j] = true;}
    for(ll i=2; i<=M-9; i++){if(!prime[i]) primes.pb(i);}
}
ll legendre(ll n,ll p){
    ll ret = 0;
    while(n){
        n /= p;
        ret += n;
    }
    return ret;
}
int main(){
    sieve();
    ll tc,t=0; cin >> tc;
    while(tc--){
        ll n,m,ans = N; 
        cin >> m >> n;
        for(ll i=0; i<primes.size() and primes[i]*primes[i] <= m; i++){
            if(m%primes[i] == 0){
                ll cnt = 0;
                while(m%primes[i] == 0){
                    m/=primes[i];
                    cnt++;
                }
                ll p = legendre(n,primes[i]);
                ans = min(ans,p/cnt);
            }
        }
        if(m>1) ans = min(ans,legendre(n,m));
        cout << "Case " << ++t << ":\n";

        if(ans == 0 or ans == N) cout << "Impossible to divide" << endl; 
        else cout << ans << endl;
    }
}
