#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define rep1(i, n) for (ll i = 1; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    int N;
    cin >> N;
    map<ll, ll> mp;
    int a;
    rep(i, 4*N-1){
        cin >> a;
        mp[a]++;
    }
    for(auto itr = mp.begin(); itr != mp.end(); itr++) {
        if(itr->second %4 != 0){
            cout << itr->first << endl;
            return 0;
        }
    }

    return 0;
}