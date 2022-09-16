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
    vector<ll> T(N);
    vector<string> S(N);
    rep(i, N) cin >> S.at(i) >> T.at(i);
    vector<ll> tempT=T;
    sort(all(tempT));
    rep(i, N){
        if(tempT.at(N-2)==T.at(i)){
            cout << S.at(i) << endl;
        }
    }

    return 0;
}