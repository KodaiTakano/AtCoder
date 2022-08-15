#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N;
    cin >> N;
    vector<ll> P(N-1);
    rep(i, N-1) cin >> P.at(i);


    ll ans=1, i=N-2;
    while(1){
        if(P.at(i)==1){
            cout << ans << endl;
            return 0;
        }else{
            i = P.at(i)-2;
            ans++;
        }
    }

    return 0;
}