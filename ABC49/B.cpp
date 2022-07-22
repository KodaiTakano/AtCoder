#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll H, W;
    cin >> H >> W;
    vector<vector<char>> C(H, vector<char>(W));
    rep(i, H) rep(j, W) cin >> C.at(i).at(j);

    vector<vector<char>> A(2*H, vector<char>(W));
    rep(i, 2*H){
        rep(j ,W){
            cout << C.at(i/2).at(j);
        }
        cout << endl;
    }
    

    return 0;
}