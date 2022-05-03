#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 1; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    int N;
    string S;
    cin >> N >> S;

    // count:同じ記号が何回繰り返されたか
    ll ans=0, count=1;
    rep(i, N){
        if(S.at(i) == S.at(i-1)){
            count++;
        }else{
            ans += (N-i)*count;
            count=1;
        }
    }
    cout << ans << endl;

    return 0;
}