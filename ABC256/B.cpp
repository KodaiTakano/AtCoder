#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    ifstream in("./../input.txt");
    cin.rdbuf(in.rdbuf());

    ll N;
    cin >> N;
    vector<ll> A(N);
    rep(i, N) cin >> A.at(i);

    vector<bool> exist(4);
    ll ans = 0;
    rep(i, N){
        cout << A.at(i) << endl;
        switch (A.at(i)){
            case 1:
                // ansに点数を足す
                ans += exist.at(3);
                // existの要素を移動
                exist.at(3)=exist.at(2);
                exist.at(2)=exist.at(1);
                exist.at(1)=1;
                break;
            case 2:
                ans += exist.at(3) + exist.at(2);

                exist.at(3)=exist.at(1);            
                exist.at(2)=1;
                break;
            case 3:
                ans += exist.at(3) + exist.at(2) + exist.at(1);
                rep(j, 4) exist.at(j)=0;
                exist.at(3)=1;
                break;
            case 4:
                ans += exist.at(3) + exist.at(2) + exist.at(1) + 1;

                rep(j, 4) exist.at(j)=0;
                break;
        }
        cout << "ans= " <<  ans << endl;
    }
    cout << ans << endl;

    return 0;
}