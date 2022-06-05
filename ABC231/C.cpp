#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N, Q;
    cin >> N >> Q;
    // 身長、数
    vector<ll> A(N);
    rep(i, N) cin >> A.at(i);
    sort(all(A));
    

    rep(i, Q){
        int x;
        cin >> x;
        cout << A.end()-lower_bound(all(A),x) << endl;
    }
    return 0;
}