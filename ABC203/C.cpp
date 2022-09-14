#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N, K;
    cin >> N >> K;
    map<ll, ll> mp;
    rep(i, N) {
        ll a, b;
        cin >> a >> b;
        mp[a]+=b;
    }

    ll place=0;
    for(auto itr = mp.begin(); itr != mp.end(); itr++) {
        // itr->firstの村まで行けるかどうか
        // cout << place << " " << K << endl;
        if(K-(itr->first-place)<0){
            cout << place+K << endl;
            return 0;
        }
        K=K-(itr->first-place)+itr->second;
        place=itr->first;
    }
    // cout << "end" << endl;
    cout << place+K << endl;
    

    return 0;
}