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
    vector<ll> p(N), q(N);
    rep(i, N) cin >> p.at(i);
    rep(i, N) q.at(p.at(i)-1)= i+1;
    rep(i, N) cout << q.at(i) << " ";

    return 0;
}