#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll A, B, C, D;
    cin >> A >> B >> C >> D;

    if(B>=C*D){
        cout << -1 << endl;
        return 0;
    }


    ll ans=0;
    ll R=0;
    while (1){
        if(A<=R*D){
            cout << ans << endl;
            return 0;
        }
        A+=B;
        R+=C;
        ans++;
    }
    

    return 0;
}