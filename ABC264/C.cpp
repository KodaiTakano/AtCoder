#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    ifstream in("./../input.txt");
    cin.rdbuf(in.rdbuf());

    ll AH, AW;
    cin >> AH >> AW;
    vector<vector<ll>> A(AH, vector<ll>(AW));
    rep(i, AH) rep(j, AW) cin >> A.at(i).at(j);
    ll BH, BW;
    cin >> BH >> BW;
    vector<vector<ll>> B(BH, vector<ll>(BW));
    rep(i, BH) rep(j, BW) cin >> B.at(i).at(j);
    
     
    ll diffH=AW-BW, diffW=AW-BW;
    

    return 0;
}