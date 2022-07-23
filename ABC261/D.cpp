#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    ifstream in("./../input.txt");
    cin.rdbuf(in.rdbuf());

    ll N, M;
    cin >> N >> M;
    vector<ll> X(N);
    rep(i, N) cin >> X.at(i);
    vector<ll> C(M), Y(M);
    rep(i, M) cin >> C.at(i) >> Y.at(i);
    vector<ll> SM(N, 0);
    rep(i, M){
        if(C.at(i) == 1){
            SM.at(0) = C.at(i);
        }
    }
    rep1(i, 1, N){
        SM.at(i) = SM.at(i-1);
        rep(j, M){
            if(i+1 == C.at(j)){
                SM.at(i) += Y.at(j);
            }
        }
    }
    rep(i, N){
        cout << SM.at(i) << endl;
    }

    vector<ll> S(N);
    S.at(0) = X.at(0);
    rep1(i, 1, N){
        S.at(i) = S.at(i-1) + X.at(i);
        rep(j, M){
            if(C.at(j)==i+1){
                S.at(i)+=Y.at(j);
            }
        }
    }
    rep(i, N){
        // cout << S.at(i) << endl;
    }

    return 0;
}