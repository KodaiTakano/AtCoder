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
    vector<ll> A(N), s({0}), ans={0};
    ll c=0;
    rep(i, N){
        cin >> A.at(i);
        // 累積和
        c+=A.at(i);
        s.push_back(c);
        if(i<=M-1){
            ans.at(0)+=(i+1)*A.at(i);
        }else{
            // cout << (s.at(i)-s.at(i-M)) << endl;
            // cout << M*A.at(i) << endl;
            ans.push_back(ans.back()-(s.at(i)-s.at(i-M))+M*A.at(i));
        }
    }
    // rep(i, ans.size()){
    //     cout << ans.at(i) << endl;
    // }
    sort(all(ans));
    cout << ans.back() << endl;

    return 0;
}