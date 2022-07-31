#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N, M;
    cin >> N >> M;
    vector<pair<ll,ll>> v(M);
    rep(i, M) cin >> v[i].first >> v[i].second;

    sort(all(v));

    // rep(i, M){
    //     cout << v[i].first << v[i].second << endl;
    // }

    ll ans=0;
    rep1(i, 1, N+1){
        rep1(j, 1, N+1){
            // cout << i << j << endl;
            if(binary_search(v.begin(), v.end(), make_pair(i, j))){
                rep1(k, 1, N+1){
                    // cout << i << j << k << endl;
                    if(binary_search(v.begin(), v.end(), make_pair(i, k)) && binary_search(v.begin(), v.end(), make_pair(j, k))){
                        ans++;
                    }
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}