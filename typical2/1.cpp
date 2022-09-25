#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    ifstream in("./../input.txt");
    cin.rdbuf(in.rdbuf());

    ll N, L, K;
    cin >> N >> L >> K;
    vector<ll> A(N);
    rep(i, N) cin >> A.at(i);

    ll ans=L, count=0;
    // 二分探索
    while(1){
        // 貪欲法
        ll sum=0;
        rep(i, N){
            sum+=A.at(i);
            if(sum>=ans){
                count++;
                sum=0;
            }
        }
        if(count==K+1){
            cout << ans << endl;
            return 0;
        }else if(count>K+1){
            ans=ans*3/2;
        }else{
            ans=(ans+1)/2;
        }
        if(ans==1) break;
        cout << ans << endl;
    }


    return 0;
}