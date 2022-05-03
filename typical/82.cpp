#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()
#define MOD 1000000007

ll digits_number(ll x){
    int count = 0;
    while(x > 0){
        x /= 10;
        count++;
    }
    return count;
}

// x~yの和
ll sigma(ll x, ll y){
    // cout << (y%MOD)*(y+1)%MOD/2%MOD - x%MOD*(x+1)%MOD/2%MOD << endl;
    if((y%MOD)*((y+1)%MOD)/2%MOD - (x-1)%MOD*(x%MOD)/2%MOD >= 0){
        return (y%MOD)*((y+1)%MOD)/2%MOD - (x-1)%MOD*(x%MOD)/2%MOD;
    }else{
        return (y%MOD)*((y+1)%MOD)/2%MOD - (x-1)%MOD*(x%MOD)/2%MOD + MOD;
    }
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

    ll L, R;
    cin >> L >> R;

    ll L_digits = digits_number(L), R_digits = digits_number(R);
    ll ans = 0, tempR = R, tempR_digits = R_digits;
    rep(i, R_digits-L_digits+1){
        // cout << "i=" << i << endl;
        // tempR,Lが違う桁数
        if(tempR_digits != L_digits){
            // cout << "if" << endl;
            // cout << ans%MOD << endl;
            // cout << mypow(10,tempR_digits-1) << " " << tempR << endl;
            // cout << sigma(mypow(10,tempR_digits-1), tempR) << endl;
            ans = ans%MOD + (sigma(mypow(10,tempR_digits-1), tempR))%MOD*tempR_digits%MOD;
            // cout << ans << endl;
            tempR = mypow(10, tempR_digits-1) - 1;
            // cout << tempR << endl;
            tempR_digits--;
        // tempR,Lが同じ桁数
        }else{
            // cout << "else" << endl;
            // cout << sigma(L, tempR)%MOD*tempR_digits%MOD << endl;
            // cout << ans << endl;
            ans = ans%MOD + sigma(L, tempR)%MOD*tempR_digits%MOD;
        }
    }
    cout << ans%MOD << endl;

    return 0;
}