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

    ll ans=0, n=1;
    while(true){
        if(n>N){
            cout << ans-1 << endl;
            return 0;
        }
        n*=2;
        ans++;
    }

    return 0;
}