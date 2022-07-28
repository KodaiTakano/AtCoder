#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    string A, B, C;
    cin >> A >> B >> C;

    vector<string> S={"ABC", "ARC", "AGC", "AHC"};

    S.push_back(A);
    S.push_back(B);
    S.push_back(C);

    sort(all(S));
    // rep(i, S.size()){
    //     cout << S.at(i) << endl;
    // }
    rep(i, S.size()){
        if(i==S.size()-1){
            cout << S.at(i) << endl;
            return 0;
        }
        if(i%2==0){
            if(S.at(i)!=S.at(i+1)){
                cout << S.at(i) << endl;
                return 0;
            }
        }
    }
    // cout << S.at(1) << endl;
    return 0;
}