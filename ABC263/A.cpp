#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    vector<ll> v(5);
    rep(i, 5) cin >> v.at(i);

    sort(all(v));

    if(v.at(0)==v.at(1) && v.at(2)==v.at(3) && v.at(3)==v.at(4)){
        cout << "Yes" << endl;
        return 0;
    }

    if(v.at(0)==v.at(1) &&  v.at(1)==v.at(2) && v.at(3)==v.at(4)){
        cout << "Yes" << endl;
        return 0;
    }
    
    cout << "No" << endl;


    return 0;
}