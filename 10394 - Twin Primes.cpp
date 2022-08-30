//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1335

//** In the name of Allah, most Gracious, most Compassionate **//
#include <bits/stdc++.h>
using namespace std;
#define     run           ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
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


const ll N = 2e7 + 9;
vector <ll> primes;
bool prime[N];
void sieve(){
    prime[1] = true;
    for(ll i = 2; i*i <= N-9; i++) if(!prime[i]){
        for(ll j = i*i; j <= N-9; j+=i) prime[j] = true;}
    for(ll i=2; i<=N-9; i++){if(!prime[i]) primes.pb(i);}
}

map<ll,pair<ll,ll>>mp;

int main(){
    sieve();
    ll cnt = 1;
    for(ll i=0; i<primes.size(); i++){
        if(primes[i]+2 == primes[i+1]){
            mp[cnt] = {primes[i],primes[i+1]};
            cnt++;
        }
        if(cnt > 100009) break;
    }
    ll n;
    while (cin >> n){
        auto u = mp[n];
        cout << "(" << u.F << ", " << u.S << ")" << endl;
    }
    return 0;
}
