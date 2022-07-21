#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

ll countDigit(ll N){
    string temp;
    
    temp = to_string(N);
    return temp.size();
}

vector<int> num2array(ll num){
    vector<int> vec;
    
    while(num){
        int dig = num%10;
        vec.push_back(dig);
        num /= 10;
    }
    reverse(all(vec));

    return vec;
}

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
    ll digit = countDigit(N);
    vector<ll> n(digit);
    
    rep(i, digit){
        n.at(i) = N%10;
        N /= 10;
    }
    sort(all(n));

    ll ans = 0;
    do{
        vector<ll> temp(digit);
        rep(i, digit){ 
            // cout << n.at(i);
            temp.at(i) = n.at(i);
        } 
        // cout << endl;
        // 分割
        rep(i, digit-1){
            ll a=0, b=0; // 分割した数字
            rep(j, i+1){
                a += temp.at(j)*mypow(10, i-j);
            }
            // cout << a << endl;
            rep1(j, i+1, digit){
                b += temp.at(j)*mypow(10, digit-j-1);
            }
            // cout << b << endl;
            if(countDigit(a)+countDigit(b)==digit){
                if(a*b > ans){
                    ans = a*b;
                }
            }
        }
    }while(next_permutation(all(n)));

    cout << ans << endl;

    return 0;
}