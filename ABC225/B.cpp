#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    ifstream in("./../input.txt");
    cin.rdbuf(in.rdbuf());

    ll N;
    cin >> N;
    map<ll, ll> mp;
    rep(i, N){
        ll a, b;
        cin >> a >> b;
        mp[a]++;
        mp[b]++;
    }

    for(auto itr = mp.begin(); itr != mp.end(); itr++) {
        if(itr->second == N){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}