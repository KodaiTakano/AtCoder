#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    string S, T;
    cin >> S >> T;

    ll count=0;
    rep(i, S.size()-1){
        if(S.at(i)!=T.at(i)){
            if(S.at(i)!=T.at(i+1) || S.at(i+1)!=T.at(i)){
                cout << "No" << endl;
                return 0;
            }
            i++;
        }else if(i==S.size()-2){
            if(S.at(S.size()-1)!=T.at(T.size()-1)){
                cout << "No" << endl;
                return 0;
            }
        }
        
    }
    cout << "Yes" << endl;

    return 0;
}