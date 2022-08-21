#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N, M, T;
    cin >> N >> M >> T;
    vector<ll> A(N-1);
    rep(i, N-1) cin >> A.at(i);
    map<ll, ll> mp;
    rep(i, M){
        ll X, Y;
        cin >> X >> Y;
        mp[X]=Y;
    }

    ll time=T;
    rep(i, N-1){
        time-=A.at(i);
        // cout << time << endl;
        if(time<=0){
            cout << "No" << endl;
            return 0;
        }
        auto itr = mp.find(i+2);
        if(itr != mp.end()){
            // cout << "a" << endl;
            time+=mp[i+2];
        }
    }
    cout << "Yes" << endl;

    return 0;
}