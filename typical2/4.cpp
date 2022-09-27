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
    vector<ll> x(W, 0), y(H, 0);
    ll A[H][W];
    rep(i, H){
        rep(j, W){
            ll n;
            cin >> n;
            A[i][j]=n;
            x.at(j)+=n;
            y.at(i)+=n;
        }
    }
    rep(i, H){
        rep(j, W){
            cout << x.at(j)+y.at(i)-A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}