#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    ifstream in("./../input.txt");
    cin.rdbuf(in.rdbuf());

    ll N, M;
    cin >> N >> M;
    vector<ll> A(N);
    rep(i, N) cin >> A.at(i);

    vector<vector<ll>> dp(N, vector<ll>(M));
    dp.at(0).at(0)=0;
    rep(i, N){
        rep1(j, 1, M){
            
        }
    }

    return 0;
}