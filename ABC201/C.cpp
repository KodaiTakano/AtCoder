#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    string S;
    cin >> S;
    vector<ll> used, unused, unknown;
    rep(i, 10){
        switch (S.at(i)){
            case 'o':
                used.push_back(i);
                break;
            case 'x':
                unused.push_back(i);
                break;
            case '?':
                unknown.push_back(i);
                break;
            default:
                break;
        }
    }
    // cout << "a" << endl;
    // rep(i, 3){
    //     cout << unused.at(i) << endl;
    // }

    ll ans=0;
    rep(i, 10){
        rep(j, 10){
            rep(k, 10){
                rep(l, 10){
                    string s=to_string(i)+to_string(j)+to_string(k)+to_string(l);
                    // cout << s << endl;
                    vector<ll> v;
                    bool contain_unused=false;
                    // cout << "b" << endl;
                    rep(m, 4){
                        // unusedがあった場合
                        if(find(all(unused), s.at(m)-'0')!=unused.end()){
                            contain_unused=true;
                            break;
                        }
                        // usedがあった場合
                        if(find(all(used), s.at(m)-'0')!=used.end()){
                            // cout << s.at(m) << endl;
                            v.push_back(s.at(m)-'0');
                        }
                    }
                    if(contain_unused) continue;
                    sort(all(v));
                    v.erase(unique(all(v)), v.end());
                    if(v==used){
                        // cout << s << endl;
                        ans++;
                    }
                }
            }
        }
    }
    cout << ans << endl;

    return 0;
}