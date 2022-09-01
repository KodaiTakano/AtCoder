#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N;
    cin >> N;

    map<ll, ll> mp;
    rep(i, N){
        ll a;
        cin >> a;
        mp[a]++;
    }

    ll ans=N*(N-1)/2;
    for(auto itr = mp.begin(); itr != mp.end(); itr++) {
        if(itr->second>=2){
            ans-=itr->second*(itr->second-1)/2;
        }
    }
    cout << ans << endl;

    return 0;
}