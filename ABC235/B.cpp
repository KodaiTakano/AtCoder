#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define rep1(i, n) for (ll i = 1; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    int N;
    cin >> N;
    ll H, ans=0;
    rep(i, N){
        cin >> H;
        if(ans<H){
            ans=H;
        }else{
            // cout << "else" << endl;
            cout << ans << endl;
            return 0;
        }
    }
    cout << ans << endl;

    return 0;
}