#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define rep1(i, n) for (ll i = 1; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N;
    cin >> N;
    map<string,ll> mp;
    vector<string> str(N);
    rep(i, N){
        string S;
        ll T;
        cin >> S >> T;
        str.at(i) = S;
        auto itr = mp.find(S);
        // すでにある場合
        if(itr == mp.end()){
            mp[S] = T;
        }
    }
    // for(auto itr = mp.begin(); itr != mp.end(); itr++) {
    //     std::cout << "key = " << itr->first // キーを表示
    //                     << ", val = " << itr->second << "\n"; // 値を表示
    // }
    ll maxscore=0;
    string maxstring;
    for(auto itr = mp.begin(); itr != mp.end(); itr++) {
        if(maxscore < itr->second){
            maxscore = itr->second;
            maxstring = itr->first;
        }
    }
    rep(i, N){
        if(str.at(i)==maxstring){
            cout << i+1 << endl;
            return 0;
        }
    }

    return 0;
}