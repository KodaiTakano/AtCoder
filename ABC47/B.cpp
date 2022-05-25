#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll W, H, N;
    cin >> W >> H >> N;
    ll x, y, a;
    // 左下、右上
    vector<ll> m={0, 0}, n={W, H};
    ll S = (n.at(0)-m.at(0))*(n.at(1)-m.at(1));
    rep(i, N){
        // cout << "a" << endl;
        cin >> x >> y >> a;
        // cout << "b" << endl;
        switch (a){
            case 1:
                // cout << "case1" << endl;
                if(n.at(0)<=x){
                    cout << "0" << endl;
                    return 0;
                }
                if(m.at(0) < x){
                    m.at(0)=x;
                }
                // cout << "c" << endl;
                break;
            case 2:
                // cout << "case2" << endl;
                if(m.at(0)>=x){
                    cout << "0" << endl;
                    return 0;
                }
                if(n.at(0) > x){
                    n.at(0)=x;
                }
                break;
            case 3:
                // cout << "case3" << endl;
                if(n.at(1)<=y){
                    cout << "0" << endl;
                    return 0;
                }
                if(m.at(1) < y){
                    m.at(1)=y;
                }
                break;
            case 4:
                // cout << "case4" << endl;
                if(m.at(1)>=y){
                    cout << "0" << endl;
                    return 0;
                }if(n.at(1) > y){
                    n.at(1)=y;
                }
                break;
            default:
                break;
        }
        S = (n.at(0)-m.at(0))*(n.at(1)-m.at(1));
        if(S < 0){
            cout << "0" << endl;
            return 0;
        }
    }
    cout << S << endl;

    return 0;
}