#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    ifstream in("./../input.txt");
    cin.rdbuf(in.rdbuf());

    ll N;
    cin >> N;
    vector<ll> S(N), T(N);
    rep(i, N) cin >> S.at(i);
    rep(i, N) cin >> T.at(i);

    vector<ll> ans(N), time=T;
    rep(i, N){
        
    }
    

    return 0;
}