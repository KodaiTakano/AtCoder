#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define rep1(i, n) for (ll i = 1; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

ll mypow(ll _x, ll _n){
    ll ret = 1;
    while(0 < _n){
        if((_n % 2) == 0){
            _x *= _x;
            _n >>= 1;
        }else{
            ret *= _x;
            --_n;
        }
    }
    return ret;
}

string toBinary(ll n){
    string r="";
    while(n != 0){
        r = (n%2 == 0 ? "0" : "1") + r;
        n /= 2;
    }
    return r;
}


int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll K;
    cin >> K;
    string ans = toBinary(K);
    rep(i, ans.size()){
        if(ans.at(i)=='1'){
            ans.at(i) = '2';
        }
    }
    
    cout << ans << endl;
    return 0;
}