#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll a, b, c;
    cin >> a >> b >> c;
    if(a==b){
        cout << c << endl;
    }else if(b==c){
        cout << a << endl;
    }else if(a==c){
        cout << b << endl;
    }else{
        cout << 0 << endl;
    }

    return 0;
}