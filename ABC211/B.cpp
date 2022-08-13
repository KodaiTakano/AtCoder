#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    vector<string> S(4);
    rep(i, 4) cin >> S.at(i);

    sort(all(S));

    // rep(i, 4) cout << S.at(i) << endl;

    if(S.at(0)=="2B" && S.at(1)=="3B" && S.at(2)=="H" && S.at(3)=="HR"){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}