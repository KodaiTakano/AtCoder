#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N, Q;
    cin >> N >> Q;
    string S;
    cin >> S;
    S+=S;
    // cout << S << endl;

    ll first_index=0; 
    rep(i, Q){
        ll num, x;
        cin >> num >> x;
        switch(num){
            case 1:
                first_index-=x;
                if(first_index < 0){
                    first_index+=N;
                }
                // cout << first_index << endl;
                break;
            case 2:
                cout << S.at(first_index+x-1) << endl;
                break;
            default:
                break;
        }

    }

    return 0;
}