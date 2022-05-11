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

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N;
    cin >> N;
    // cout << N << endl;
    ll num = mypow(2, 31);
    // cout << -num << endl;
    if(-num <= N && N < num){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}