#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N;
    cin >> N;
    map<vector<ll>, ll> mp;
    rep(i, N){
        ll L;
        cin >> L;
        vector<ll> a;
        rep(j, L){
            ll n;
            cin >> n;
            a.push_back(n);
        }
        mp[a]++;
    }

    cout << mp.size() << endl;

    return 0;
}