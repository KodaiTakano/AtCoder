#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    string S;
    cin >> S;

    map<char, ll> mp;
    rep(i, 3){
        mp[S.at(i)]++;
    }
    for(auto itr = mp.begin(); itr != mp.end(); itr++) {
        if(itr->second == 1){
            cout << itr->first << endl;
            return 0;
        }
    }

    cout << "-1" << endl;

    return 0;
}