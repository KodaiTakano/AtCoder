#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N, X;
    cin >> N >> X;
    vector<ll> B(N), sumAB(N);
    
    rep(i, N){
        ll A;
        cin >> A >> B.at(i);
        if(i==0){
            sumAB.at(0) = A + B.at(i);
        }else{
            sumAB.at(i) = A + B.at(i) + sumAB.at(i-1);
        }
    }

    ll ans=LONG_MAX;
    // cout << ans << endl;
    rep(i, N){
        if(X <= i){
            break;
        }
        // オーバーフロー判定
        if((X-i-1)<LONG_MAX/B.at(i)){
            // オーバーフロー判定
            if(sumAB.at(i)<LONG_MAX-(X-i-1)*B.at(i)){
                if(sumAB.at(i)+(X-i-1)*B.at(i) < ans){
                    ans = sumAB.at(i)+(X-i-1)*B.at(i);
                }
            }
        }
    }
    cout << ans << endl;

    return 0;
}