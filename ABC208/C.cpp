#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N, K;
    cin >> N >> K;
    vector<ll> a(N);
    rep(i, N) cin >> a.at(i);

    // 全員にx個配る
    ll x=K/N;
    // cout << x << endl;
    vector<ll> b=a;
    sort(all(b));
    // 国民番号y以下の人に+1
    ll y=0;
    if(K%N!=0){
        y = b.at(K%N-1);
    }
    // cout << y << endl;
    rep(i, N){
        ll ans=x;
        if(a.at(i)<=y){
            ans++;
        }
        cout << ans << endl;
    }

    return 0;
}