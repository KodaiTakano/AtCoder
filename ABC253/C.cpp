#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll Q, query, x, c;
    cin >> Q;
    map<ll, ll> S;
    auto itr=S.begin();
    rep(i, Q){
        cin >> query;
        switch (query){
            case 1:
                cin >> x;
                S[x]++;
                break;
            case 2:
                cin >> x >> c;
                itr = S.find(x);
                if(itr != S.end()){ 
                    if(S[x] > c){
                        S[x] -= c;
                    }else{
                        S.erase(x);
                    }
                }
                break;
            case 3:
                // cout << "case 3" << endl;
                // for(auto itr = S.begin(); itr != S.end(); itr++) {
                //     std::cout << "key = " << itr->first // キーを表示
                //             << ", val = " << itr->second << "\n"; // 値を表示
                // }
                cout << S.rbegin()->first-S.begin()->first << endl;
            break;
        default:
            break;
        }
    }

    return 0;
}