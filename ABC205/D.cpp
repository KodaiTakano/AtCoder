#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    ifstream in("./../input.txt");
    cin.rdbuf(in.rdbuf());

    ll N, Q;
    cin >> N >> Q;
    vector<ll> A(N), sum(N,0);
    rep(i, N){
        cin >> A.at(i);
        if(i==0){
            sum.at(0)=A.at(i)-1;
        }else{
            sum.at(i)=sum.at(i-1)+A.at(i)-A.at(i-1)-1;
        }
    }

    // rep(i, N){
    //     cout << sum.at(i) << endl;
    // }

    rep(i, Q){
        ll k;
        cin >> k;
        auto itr=lower_bound(all(sum), k);
        // 見つかった場合
        if(itr!=sum.end()){
            cout << A.at(itr-sum.begin())-1 << endl;
        }else{
            cout << k+sum.back()+1 << endl;
        }
    }

    return 0;
}