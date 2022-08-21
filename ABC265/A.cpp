#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll X, Y, N;
    cin >> X >> Y >> N;

    vector<ll> price;
    rep(i, 101){
        rep(j, 101){
            if(i+j*3==N){
                price.push_back(i*X+j*Y);
            }
        }
    }

    sort(all(price));
    cout << price.at(0) << endl;

    return 0;
}