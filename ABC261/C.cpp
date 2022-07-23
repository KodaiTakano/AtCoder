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
    vector<string> S(N);
    map<string, ll> num;
    rep(i, N) cin >> S.at(i);

    rep(i, N){
        if(num[S.at(i)]==0){
            cout << S.at(i) << endl;
        }else{
            cout << S.at(i) << "(" << num[S.at(i)] << ")" << endl;
        }
        num[S.at(i)]++;
    }

    return 0;
}