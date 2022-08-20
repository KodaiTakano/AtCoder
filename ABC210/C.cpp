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
    vector<ll> c(N);
    rep(i, N) cin >> c.at(i);

    map<ll, ll> mp;
    rep(i, K){
        mp[c.at(i)]++;
    }
    ll ans = mp.size();
    rep1(i, 1, N-K+1){
        mp[c.at(i+K-1)]++;
        if(mp[c.at(i-1)]==1){
            mp.erase(c.at(i-1));
        }else{
            mp[c.at(i-1)]--;
        }
        if(ans<mp.size()){
            ans = mp.size();
        }

        // cout << "i=" << i << endl;
        // for(auto itr = mp.begin(); itr != mp.end(); itr++) {
        //     std::cout << "key = " << itr->first // キーを表示
        //         << ", val = " << itr->second << "\n"; // 値を表示
        // }
    }
    cout << ans << endl;



    // ll ans=1;
    // rep(i, N-K){
    //     vector<ll> Kvec(c.begin()+i, c.begin()+K+i);
    //     // rep(i, Kvec.size()){
    //     //     cout << Kvec.at(i) << endl;
    //     // }
    //     sort(all(Kvec));
    //     Kvec.erase(unique(all(Kvec)), Kvec.end());
    //     if(ans<Kvec.size()){
    //         ans = Kvec.size();
    //     }   
    // }
    // cout << ans << endl;

    return 0;
}