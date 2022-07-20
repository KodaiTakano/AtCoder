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

    reverse(all(S));
    // cout << S << endl;
    rep(i, S.size()){
        if(S.substr(i,5)=="maerd"){
            i+=4;
        }else if(S.substr(i,7)=="remaerd"){
            i+=6;
        }else if(S.substr(i,5)=="esare"){
            i+=4;
        }else if(S.substr(i,6)=="resare"){
            i+=5;
        }else{
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;

    return 0;
}