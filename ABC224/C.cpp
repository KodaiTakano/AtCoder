#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N;
    cin >> N;
    vector<ll> X(N), Y(N);
    rep(i, 0, N) cin >> X.at(i) >> Y.at(i);

    ll ans=0;
    rep(i, 0, N-2){
        rep(j, i+1, N-1){
            rep(k, j+1, N){
                ll a = (Y.at(i)-Y.at(j))*(X.at(i)-X.at(k));
                ll b = (Y.at(i)-Y.at(k))*(X.at(i)-X.at(j));
                if(a != b){
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;

    return 0;
}