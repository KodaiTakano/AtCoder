#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

bool isOK(vector<ll> v){
    // "("の数
    ll count=0;
    rep(i, v.size()){
        if(v.at(i)==0) count++;
        else count--;
        if(count<0) return false;
    }
    return true;
}

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N;
    cin >> N;
    if(N%2==0){
        // 0="(", 1=")"
        vector<ll> v(N, 1);
        rep(i, N/2){
            v.at(i)=0;
        }
        do {
            if(isOK(v)){
                rep(i, N){
                    if(v.at(i)) cout << ")";
                    else cout << "(";
                }
                cout << endl;
            }
        }while(next_permutation(v.begin(), v.end()));
    }

    return 0;
}