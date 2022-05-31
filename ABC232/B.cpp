#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    string S, T;
    cin >> S >> T;
    // cout << ('a'-'z')%26 << endl;

    int K = (T.at(0)-S.at(0)+26)%26;
    rep1(i, S.size()){
        if((T.at(i)-S.at(i)+26)%26 != K){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    return 0;
}