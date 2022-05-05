#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    ifstream in("./../input.txt");
    cin.rdbuf(in.rdbuf());

    ll N, L, K;
    cin >> N >> L >> K;
    vector<ll> A(N);
    rep(i, N) cin >> A.at(i);

    rep(i, N){
        ll min = A.at(i);
        
    }

    return 0;
}