#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll P;
    cin >> P;
    vector<ll> money(10, 1);
    rep1(i, 1, 10){
        money.at(i) = money.at(i-1)*(i+1);
    }
    // rep(i, 10) cout << money.at(i) << endl;

    ll ans=0;
    for(int i = 9; i>=0; i--){
        if(P>=money.at(i)){
            ans+=P/money.at(i);
            P-=money.at(i)*(P/money.at(i));
            // cout << "i=" << i << endl;
            // cout << ans << endl;
            // cout << P << endl;
        }
    }
    cout << ans << endl;

    return 0;
}