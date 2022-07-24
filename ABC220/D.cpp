#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

const int MOD = 998244353;

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N;
    cin >> N;
    vector<ll> A(N);
    rep(i, N) cin >> A.at(i);

    // num, count
    map<ll, ll> old_ans;
    map<ll, ll> new_ans;

    old_ans[(A.at(0)+A.at(1))%10]++;
    old_ans[(A.at(0)*A.at(1))%10]++;
    rep1(i, 2, N){
        for(auto itr = old_ans.begin(); itr != old_ans.end(); itr++) {
            new_ans[(itr->first+A.at(i))%10] += itr->second%MOD;
            new_ans[(itr->first*A.at(i))%10] += itr->second%MOD;
        }
        old_ans=new_ans;
        new_ans.clear();
    }
    
    rep(i, 10){
        // cout << i << " ";
        auto itr = old_ans.find(i);
        if(itr != old_ans.end()){
            cout << itr->second%MOD << endl; 
        }else{
            cout << 0 << endl;
        }
    }

    return 0;
}