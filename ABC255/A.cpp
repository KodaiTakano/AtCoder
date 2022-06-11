#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll R, C;
    cin >> R >> C;
    vector<vector<ll>> A(2, vector<ll>(2));
    rep(i, 2){
        rep(j, 2){
            cin >> A.at(i).at(j);
        }
    }
    cout << A.at(R-1).at(C-1) << endl;


    return 0;
}