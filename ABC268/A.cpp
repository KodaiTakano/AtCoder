#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    vector<ll> A(5);
    rep(i, 5) cin >> A.at(i);
    sort(all(A));
    A.erase(unique(all(A)), A.end());
    cout << A.size() << endl;

    return 0;
}