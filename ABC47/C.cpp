#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    string S;
    cin >> S;

    ll count = 0;
    char before = S.at(0);
    rep1(i, S.size()){
        if(before != S.at(i)){
            count++;
        }
        before = S.at(i);
    }
    cout << count << endl;

    return 0;
}