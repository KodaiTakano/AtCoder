#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N, W;
    cin >> N >> W;
    map<ll, ll> cheese;
    rep(i, N){
        ll A, B;
        cin >> A >> B;
        cheese[A] += B;
        // cout << cheese[A] << endl;
    }

    // for(auto itr = cheese.begin(); itr != cheese.end(); itr++) {
    //     std::cout << "key = " << itr->first // キーを表示
    //                     << ", val = " << itr->second << "\n"; // 値を表示
    // }

    // auto itr = cheese.rbegin();
    // itr++;
    // itr++;

    // cout << itr->first << " " << itr->second << endl;

    ll ans = 0;
    for(auto itr = cheese.rbegin(); itr != cheese.rend(); itr++) {
        ll A=itr->first, B=itr->second;
        
        if(W < B){
            ans += A*W; 
            break;
        }else{
            ans += A*B;
            W-=B;
        }
        // std::cout << "key = " << itr->first // キーを表示
        //                 << ", val = " << itr->second << "\n"; // 値を表示
    }
    cout << ans << endl;
    
    

    return 0;
}