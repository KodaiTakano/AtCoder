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

    rep(i, S.size()){
        if(S.at(i)=='6'){
            S.at(i)='9';
        }else if(S.at(i)=='9'){
            S.at(i)='6';
        }
    }
    for(ll i=S.size()-1; i>=0; i--){
        cout << S.at(i);
    }

    return 0;
}