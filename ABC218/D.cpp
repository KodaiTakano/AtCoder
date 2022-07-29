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
    vector<ll> x(N), y(N);
    rep(i, N) cin >> x.at(i) >> y.at(i);

    map<ll, ll> xmp, ymp;
    rep(i, N){
        xmp[x.at(i)]++;
        ymp[y.at(i)]++;
    }

    return 0;
}