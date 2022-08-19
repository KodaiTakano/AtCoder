#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N;
    string S;
    cin >> N >> S;
    
    rep(i, N){
        if(S.at(i)=='1'){
            if(i%2==0){
                cout << "Takahashi" << endl;
                return 0;
            }else{
                cout << "Aoki" << endl;
                return 0;
            }
        }
    }

    return 0;
}