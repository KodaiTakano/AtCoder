#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N, X;
    cin >> N;
    vector<ll> A(N);
    rep(i, N) cin >> A.at(i);
    cin >> X;
    
    ll sum=accumulate(all(A),0);
    // 何個「全部の配列A」を連結させるか
    ll n = X/sum;
    // cout << n << endl;
    // 「全部の配列A」を連結させた合計
    ll Asum = n*sum;
    // 残り
    ll left = X-Asum;
    // cout << left << endl;
    if(left==0){
        cout << n*N << endl;
        return 0;
    }
    rep(i, N){
        left-=A.at(i);
        if(left < 0){
            cout << n*N+i+1 << endl;
            return 0;
        }
    }

    return 0;
}