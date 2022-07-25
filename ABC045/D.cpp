#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define rep1(i, n) for (ll i = 1; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    ifstream in("./../input.txt");
    cin.rdbuf(in.rdbuf());

    ll H, W, N;
    cin >> H >> W >> N;
    vector<ll> a(N), b(N);
    rep(i, N){
        cin >> a.at(i) >> b.at(i);
    }
    

    return 0;
}