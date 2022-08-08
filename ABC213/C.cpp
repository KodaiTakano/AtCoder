#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll H, W, N;
    cin >> H >> W >> N;
    vector<pair<ll, ll>> A, B;
    rep(i, N) {
        ll a, b;
        cin >> a >> b;
        A.push_back({a, i});
        B.push_back({b, i});
    }

    // 行
    // col[i]=x iの数字が書かれているのがx行目にある
    map<ll, ll> col;
    sort(all(A));
    ll count=1;
    col[A.at(0).second]=count;
    rep1(i, 1, N){
        if(A.at(i).first!=A.at(i-1).first){
            count++;
            col[A.at(i).second]=count;
        }else{
            col[A.at(i).second]=count;   
        }
    }
    // rep(i, N) cout << col[i]+1 << endl;

    // 列
    map<ll, ll> raw;
    sort(all(B));
    count=1;
    raw[B.at(0).second]=count;
    rep1(i, 1, N){
        if(B.at(i).first!=B.at(i-1).first){
            count++;
            raw[B.at(i).second]=count;
        }else{
            raw[B.at(i).second]=count;   
        }
    }
    rep(i, N) cout << col[i] << " " << raw[i] << endl;

    return 0;
}