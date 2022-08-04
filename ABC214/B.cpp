#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll S, T;
    cin >> S >> T;

    ll ans=0;
    rep(a, S+1){
        rep(b, S+1-a){
            rep(c, S+1-a-b){
                if(a*b*c<=T){
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}