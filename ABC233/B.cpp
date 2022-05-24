#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll L, R;
    cin >> L >> R;
    string S;
    cin >> S;

    string temp = S.substr(L-1, R-L+1);
    // cout << temp << endl;
    reverse(all(temp));
    cout << S.substr(0, L-1) + temp + S.substr(R) << endl;


    return 0;
}