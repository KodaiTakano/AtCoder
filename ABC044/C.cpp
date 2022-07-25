#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    ifstream in("./../input.txt");
    cin.rdbuf(in.rdbuf());

    ll N, A;
    cin >> N >> A;
    vector<ll> x(N);
    rep(i, N) cin >> x.at(i);
    
    sort(all(x));
    map<ll, ll> ncount;
    rep(i, N) ncount[i]++;
    for(auto itr = ncount.begin(); itr != ncount.end(); ++itr) {
        // itr->first
        // itr->second   
    }


    ll ans=0;



    return 0;
}