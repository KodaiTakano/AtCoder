#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll x, y;
    cin >> x >> y;

    vector<ll> v={0,1,2};
    if(x==y){
        cout << x << endl;
    }else{
        v.push_back(x);
        v.push_back(y);
        rep(i, 3){
            if(count(all(v), i)==1){
                cout << i << endl;
                return 0;
            } 
        }
        
    }

    return 0;
}