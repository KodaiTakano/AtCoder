#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define rep1(i, n) for (ll i = 1; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll H, W;
    cin >> H >> W;
    vector<vector<ll>> A(H, vector<ll>(W));
    rep(i, H) rep(j, W) cin >> A.at(i).at(j);

    rep(j, W){
        rep(i, H){
            cout << A.at(i).at(j) << " ";
        }
        cout << endl;
    }

    return 0;
}