#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    ifstream in("./../input.txt");
    cin.rdbuf(in.rdbuf());

    ll N, X;
    cin >> N >> X;
    vector<ll> L(N);
    vector<vector<ll>> a(N);
    rep(i, N){
        cin >> L.at(i);
        ll x;
        rep(j, L.at(i)){
            cin >> x;
            a.at(i).push_back(x);
        }
    }
    rep(i, N){
        cout << "L= " << L.at(i) << " ";
        cout << "a= " << endl;
        rep(j, L.at(i)){
            cout << a.at(i).at(j) << " ";
        }
        cout << endl;
    }

    return 0;
}