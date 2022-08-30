https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1640

//** In the name of Allah, most Gracious, most Compassionate **//
#include <bits/stdc++.h>
using namespace std;
#define     run           ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define     ll              long long
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
#define     yes             cout << "YES" << '\n'
#define     no              cout << "NO" << '\n'



const ll mod = 1e9+7;
const ll M = 6e6+7;

const int N = 10000005; vector <ll> primes; bool prime[N];
void sieve(){memset(prime,1,sizeof(prime)); primes.pb(2); for(ll i = 4; i<=N; i+=2) prime[i] = 0;
     for(ll i = 3; i<=N; i+=2) if(prime[i]){primes.pb(i); for(ll j = i*i; j<=N; j+=i*2LL) prime[j] = 0;}}


int main(){
    sieve();
    ll n;
    while(1){
        cin >> n;
        if(n == 0) break;
        ll ans = 0, p = n;
        for(ll i=0; i<primes.size() && primes[i]*primes[i]<=n; i++){
            if(n%primes[i]==0){
                while(n%primes[i] == 0){
                    n/=primes[i];
                }
                ans++;
            }
        }
        if(n>1) ans++;
        cout << p << " : " << ans << endl;
    }
}
