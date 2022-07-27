#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N, M;
    cin >> N;
    vector<ll> T(N);
    rep(i, N) cin >> T.at(i);
    cin >> M;
    vector<ll> P(M), X(M);
    rep(i, M) cin >> P.at(i) >> X.at(i);

    ll sum = accumulate(all(T), 0);
    rep(i, M){
        cout << sum - T.at(P.at(i)-1) + X.at(i) << endl;
    }

    return 0;
}