#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N, M, X, T, D;
    cin >> N >> M >> X >> T >> D;

    if(X <= M){ // = ?
        cout << T << endl;
    }else{
        cout << T-(X-M)*D << endl;
    }

    return 0;
}