#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define ll long long 

int main (void){
    ll N, K, k=0, n=0;;
    cin >> N >> K;
    rep(i, K) k+=i+1;
    rep(i, N) n+=i+1;
    cout << k*N+n*K*100 << endl;
    return 0;
}