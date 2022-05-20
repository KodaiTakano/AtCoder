#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define rep1(i, n) for (ll i = 1; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()
 
int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());
 
    ll N, K;
    cin >> N >> K;
 
    ll P, n=0;
    map<ll, ll> mp;
    rep(i, N){
        cin >> P;
        // cout << n << endl;
        if(n < P){
            mp[P]++;
            mp.erase(n);
        }
        // for(auto itr = mp.begin(); itr != mp.end(); itr++) {
        //     std::cout << "key = " << itr->first // キーを表示
        //                     << ", val = " << itr->second << "\n"; // 値を表示
        // }
        if(i >= K-1){
            auto itr = mp.begin();
            n = itr->first;
            cout << n << endl;
            // mp.erase(itr->first);
            // itr++;
        }
        // cout << endl;
    }
 
    return 0;
}