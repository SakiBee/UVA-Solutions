https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3372

//** In the name of Allah, most Gracious, most Compassionate **//
#include <bits/stdc++.h>
using namespace std;
#define     ll              long long
#define     lcm(a,b)        (a/__gcd(a,b))*b
#define     pb              push_back
#define     pi              3.1415926535897932384
#define     e               2.7182818284590452353

const ll M = 1e9+7;

int main(){
    ll tt,t=0;
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> tt;
    while(tt--){
        ll d,n, ans = 0ll, tot = 0ll;
        map<ll,ll>mp;
        mp[0]++;
        cin >> d >> n;
        std::vector<ll> v(n), pre(n+1,0);
        for(int i=0; i<n; i++){
            cin >> v[i];
            tot += v[i];
            tot %= d;
            ans += mp[tot];
            mp[tot]++;
        }
        
        cout << ans << endl;

    }
    return 0;
}

