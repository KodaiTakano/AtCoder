#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()
#define MOD (1000000000+7)

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    int N;
    cin >> N;

    ll ans = 1;
    rep(i, N){
        int a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;
        int sum = a + b + c + d + e + f;
        ans = ans%MOD*sum%MOD;
    }
    cout << ans%MOD << endl;

    return 0;
}