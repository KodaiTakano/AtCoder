#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N, X;
    cin >> N >> X;

    string S = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    int a = (X-1)/N;

    cout << S.at(a) << endl;

    return 0;
}