#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N;
    cin >> N;
    map<string, ll> S;
    rep(i, N){
        string s;
        cin >> s;
        S[s]++;
    } 
    ll max = -1;
    auto max_itr=S.begin();
    for(auto itr = S.begin(); itr != S.end(); itr++) {
        if(max < itr->second){
            max = itr->second;
            max_itr=itr;
        }
    }
    cout << max_itr->first << endl;

    return 0;
}