#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    ifstream in("./../input.txt");
    cin.rdbuf(in.rdbuf());

    ll N;
    cin >> N;

    string s;
    while(N>0){
        if(N%2==0){
            s.append("0");
        }else{
            s.append("1");
        }
        N/=2;
    }
    cout << s << endl;
    vector<ll> apear;
    rep(i, s.size()){
        if(s.at(i)=='1'){
            apear.push_back(i);
        }
    }

    vector<ll> ans;

    return 0;
}