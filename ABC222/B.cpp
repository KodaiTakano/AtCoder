#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N, P;
    cin >> N >> P;
    ll ans=0;
    rep(i, N){
        ll a;
        cin >> a;
        if(a < P){
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}