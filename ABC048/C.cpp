#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N, x;
    cin >> N >> x;
    vector<ll> a(N);
    rep(i, N) cin >> a.at(i);

    ll min_index=distance(a.begin(), min_element(all(a)));
    // cout << min_index << endl;

    ll ans = 0;

    vector<ll> ans_vec(N);
    ans_vec.at(min_index)=a.at(min_index);
    // 前半の方
    for(int i=min_index-1; i>=0; i--){
        // cout << "i=" << i << endl;
        // 後ろの要素と足してx以下にする
        if(a.at(i)+ans_vec.at(i+1)>x){
            ans_vec.at(i) = x-ans_vec.at(i+1);
            // cout << "if " << ans_vec.at(i) << endl;
        }else{
            ans_vec.at(i)=a.at(i);
            // cout << "else " << ans_vec.at(i) << endl;
        }
        ans += a.at(i)-ans_vec.at(i);
        // cout << "ans= " << ans << endl;
    }
    // cout << ans << endl;

    // 後半の方
    for(int i=min_index+1; i<N; i++){
        // 前の要素と足してx以下にする
        if(ans_vec.at(i-1)+a.at(i)>x){
            ans_vec.at(i) = x-ans_vec.at(i-1);
            // cout << "if " << ans_vec.at(i) << endl;
        }else{
            ans_vec.at(i)=a.at(i);
        }
        ans += a.at(i)-ans_vec.at(i);    
    }
    cout << ans << endl;



    return 0;
}