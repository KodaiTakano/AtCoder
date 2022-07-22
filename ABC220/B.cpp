#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
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

ll Ntoten(ll N, ll x){
    // cout << x << endl;
    ll ret=0, i=0;
    while (x!=0){
        // cout << x%10*mypow(N, i) << endl;
        ret += x%10*mypow(N, i);
        x /= 10;
        i++;
        // cout << ret << endl;
    }
    return ret;
}

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll K, A, B;
    cin >> K >> A >> B;

    cout << Ntoten(K, A)*Ntoten(K, B) << endl;


    return 0;
}