#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll A, B, C;
    cin >> A >> B >> C;

    ll n = C*((A+(C-1))/C);
    // cout << n << endl;
    if(A<=n && n<=B){
        cout << n << endl;
    }else{
        cout << -1 << endl;
    }

    return 0;
}