#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N;
    cin >> N;
    vector<ll> A(N);
    ll sum=0;
    rep(i, N){
        cin >> A.at(i);
        sum += A.at(i);
    }
    ll X;
    cin >> X;

    ll ans=(X/sum)*N, left=X-(X/sum)*sum;
    // cout << left << endl;
    rep(i, N){
        left-=A.at(i);
        if(left<0){
            cout << ans+i+1 << endl;
            return 0;
        }
    }


    return 0;
}