#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N, P, Q, R;
    cin >> N >> P >> Q >> R;
    vector<ll> S(N+1, 0);
    rep1(i, 1, N+1) {
        ll A;
        cin >> A;
        S.at(i)=S.at(i-1)+A;
    }

    rep(x, N){
        // S.at(y)=P+S.at(x) S.at(z)=Q+S.at(y)=Q+P+S.at(x)
        if(binary_search(all(S), P+S.at(x)) && binary_search(all(S), P+Q+S.at(x)) && binary_search(all(S), P+Q+R+S.at(x))){
            // cout << x << endl;
            cout << "Yes" << endl;
            return 0;
        }
    }   
    cout << "No" << endl;

    return 0;
}