#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

void solve1(vector<ll> a, ll N){
    rep(i, N){
        // cout << i << endl;
        rep1(j, i+1, N){
            // cout << a.at(j) << endl;
            if(min(a.at(i), a.at(j))==i+1){
                if(max(a.at(i), a.at(j))==j+1){
                    cout << a.at(i) << " " << a.at(j) << endl;
                }
            }
        }
    }
}

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N, X=0;
    cin >> N;
    vector<ll> a(N);
    rep(i, N) {
        cin >> a.at(i);
        if(i+1 == a.at(i)){
            X++;
        }    
    }
    // solve1(a, N);
    ll Y=0;
    rep(i, N){
        // indexとa.atが同じ場合は除く
        if(a.at(i)!=a.at(a.at(i)-1)){
            // indexとa.at(index)が同じ場合
            if(i==a.at(a.at(i)-1)-1){
                // cout << i <<  " " << a.at(i) << " " << a.at(a.at(i)-1) << endl;
                Y++;
            }
        }
    }
    cout << X*(X-1)/2 + Y/2  << endl;
    // cout << Y << endl;
    return 0;
}