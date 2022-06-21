#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    ifstream in("./../input.txt");
    cin.rdbuf(in.rdbuf());

    string S;
    ll K;
    cin >> S >> K;

    vector<ll> S_ary;
    ll same_num=1;
    char before = S.at(0);
    rep1(i, S.size()){
        if(before == S.at(i)){
            same_num++;
        }else{
            S_ary.push_back(same_num);
            same_num=1;
        }
        before = S.at(i);
    }
    rep(i, S_ary.size()){
        cout << S_ary.at(i) << endl;
    }

    if(S.at(0)=='.'){
        int ans=0;
        rep(i, S.size()){
            
        }
    }else{

    }

    return 0;
}