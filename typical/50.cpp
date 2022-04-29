#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 1; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()
#define MOD (1000000000+7)

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    int N, L;
    cin >> N >> L;

    // n段登った時に、合計何通りあるか
    vector<ll> dp(N+1);
    dp.at(0) = 1;
    rep(i, N+1){
        // cout << "i=" << i << endl;
        dp.at(i) += dp.at(i-1) % MOD;
        // cout << dp.at(i) << endl;
        if(i >= L){
            // cout << "if" << endl;
            dp.at(i) += dp.at(i-L) % MOD;
        }
        // cout << dp.at(i) << endl;
    }
    cout << dp.at(N) % MOD << endl;

    return 0;
}