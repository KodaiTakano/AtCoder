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
    map<ll, ll> mpA, mpC;
    vector<ll> B(N);
    rep(i, N){
        ll a;
        cin >> a;
        mpA[a]++;
    }
    rep(i, N) cin >> B.at(i);
    rep(i, N){
        ll c;
        cin >> c;
        mpC[c-1]++;
    }

    ll ans=0;
    rep(i, N){
        if(mpA[B.at(i)]>0 && mpC[i]>0){
            // cout << mpA[B.at(i)] << endl;
            ans += mpA[B.at(i)]*mpC[i];
        }
    }
    cout << ans << endl;

    return 0;
}