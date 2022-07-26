#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    string X;
    ll N;
    cin >> X >> N;
    vector<string> S(N);
    rep(i, N) cin >> S.at(i);

    string A = "abcdefghijklmnopqrstuvwxyz";
    vector<string> TempS(N);
    rep(i, N){
        rep(j, S.at(i).size()){
            char s = S.at(i).at(j);
            TempS.at(i).push_back(A.at(X.find(s)));
        }
    }

    sort(all(TempS));

    rep(i, N){
        string ans;
        rep(j, TempS.at(i).size()){
            char s = TempS.at(i).at(j);
            ans.push_back(X.at(A.find(s)));
        }
        cout << ans << endl;
    }

    return 0;
}