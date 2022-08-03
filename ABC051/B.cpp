#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll K, S;
    cin >> K >> S;

    ll ans=0;
    rep(x, K+1){
        rep(y, K+1){
            if(S-x-y<=K && 0<=S-x-y){
                // cout << x << " " << y << endl;
                ans++;
            }
        }
    }
    cout << ans << endl;

    return 0;
}