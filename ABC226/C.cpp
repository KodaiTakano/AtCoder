#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    ifstream in("./../input.txt");
    cin.rdbuf(in.rdbuf());

    // 習得するべき技
    ll N;
    cin >> N;
    // 技i習得にかかる時間:T(i-1)が技i習得にかかる時間
    vector<ll> T(N);
    // 技i習得に必要な技:A(i-1)が技i習得に必要な技
    vector<vector<ll>> A(N);
    rep(i, N){
        cin >> T.at(i);
        ll K;
        cin >> K;
        rep(j, K){
            ll a;
            cin >> a;
            A.at(j).push_back(a);
        }
    }

    


    
    return 0;
}