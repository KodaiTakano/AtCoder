#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    ifstream in("./../input.txt");
    cin.rdbuf(in.rdbuf());

    ll N, Q;
    cin >> N >> Q;

    vector<ll> ans(N), place(N+1);
    // ans.at(x) 
    rep(i, N) ans.at(i) = i+1;
    // place.at(x) xの数字がどこにあるか
    rep(i, N+1) place.at(i) = i;

    rep(i, Q){
        ll x, temp;
        cin >> x;
        if(place.at(x) != N){
            temp = ans.at(place.at(x));
            ans.at(place.at(x)) = ans.at(place.at(x+1));
            ans.at(place.at(x+1)) = temp;
        }

    }

    return 0;
}