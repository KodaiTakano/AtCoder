#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()
#define MOD 1000000007

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    string S;
    cin >> S;

    map<char, ll> mp;
    rep(i, S.size()){
        if(S.at(i)=='c'){
            mp[S.at(i)]++;
        }
        if(S.at(i)=='h'){
            mp[S.at(i)]+=mp['c']%MOD;
        }
        if(S.at(i)=='o'){
            mp[S.at(i)]+=mp['h']%MOD;
        }
        if(S.at(i)=='k'){
            mp[S.at(i)]+=mp['o']%MOD;
        }
        if(S.at(i)=='u'){
            mp[S.at(i)]+=mp['k']%MOD;
        }
        if(S.at(i)=='d'){
            mp[S.at(i)]+=mp['u']%MOD;
        }
        if(S.at(i)=='a'){
            mp[S.at(i)]+=mp['d']%MOD;
        }
        if(S.at(i)=='i'){
            mp[S.at(i)]+=mp['a']%MOD;
        }
    }
    cout << mp['i']%MOD << endl;

    return 0;
}