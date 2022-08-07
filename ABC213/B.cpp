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
    vector<ll> A(N), temp;
    rep(i, N) cin >> A.at(i);
    temp = A;
    sort(all(temp));

    cout << find(all(A), temp.at(N-2)) - A.begin()+1 << endl;

    return 0;
}