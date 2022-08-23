#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()
#define MOD 1000000007

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N;
    cin >> N;
    vector<ll> C(N);
    rep(i, N) cin >> C.at(i);

    sort(all(C));
    ll ans=C.at(0);
    rep1(i, 1, N){
        ans*=(C.at(i)-i)%MOD;
        ans%=MOD;
    }
    cout << ans << endl;

    return 0;
}