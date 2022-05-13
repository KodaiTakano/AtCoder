#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define rep1(i, n) for (ll i = 1; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N, M;
    cin >> N >> M;
    vector<string> S(N), T(M);
    rep(i, N){
        cin >> S.at(i);
    }
    rep(i, M){
        cin >> T.at(i);
    }
    int j=0;
    rep(i, N){
        if(S.at(i)==T.at(j)){
            cout << "Yes" << endl;
            j++;
        }else{
            cout << "No" << endl;
        }
    }

    return 0;
}