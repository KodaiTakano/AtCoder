#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    ifstream in("./../input.txt");
    cin.rdbuf(in.rdbuf());

    ll N;
    cin >> N;
    // T, X, A
    vector<vector<ll>> A(N, vector<ll>(3));
    rep(i, N) cin >> A.at(i).at(0) >> A.at(i).at(1) >> A.at(i).at(2);
    
    sort(all(A));

    vector<vector<ll>> dp(5, vector<ll>(N));
    rep(i, 5){
        rep(j, N){
            if(i <= A.at(j).at(0)){
                break;
            }

            
        }
    }

    return 0;
}