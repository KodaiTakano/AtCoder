#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    ifstream in("./../input.txt");
    cin.rdbuf(in.rdbuf());

    ll N;
    cin >> N;
    vector<vector<ll>> A(3*N, vector<ll>(3*N));
    ll max=0, maxi, maxj;
    rep(i, N){
        rep(j, N){
            ll a;
            cin >> a;
            rep(k, 3){
                rep(l, 3){
                    A.at(i+k*N).at(j+l*N) = a;
                }
            }
        }
    }

    rep(i, 3*N){
        rep(j, 3*N){
            cout << A.at(i).at(j) << " ";
        }
        cout << endl;
    }

    return 0;
}