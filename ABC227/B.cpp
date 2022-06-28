#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    vector<ll> exist(1001);
    rep1(a,200){
        rep1(b, 200){
            ll s = 4*a*b+3*a+3*b;
            if(s < 1001){
                exist.at(s) = true;
            }
        }
    }


    ll N;
    cin >> N;
    ll count=0;
    rep(i, N){
        ll S;
        cin >> S;
        if(exist.at(S) == false){
            count++;
        }
    }
    cout << count << endl;



    return 0;
}