#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    string S;
    cin >> S;

    string min = S, max = S;
    rep(i, S.size()-1){
        S = S.substr(1) + S.substr(0,1);
        // cout << S << endl;
        if(min > S){
            min = S;
        }
        if(max < S){
            max = S;
        }
    }
    cout << min << endl;
    cout << max << endl;

    return 0;
}