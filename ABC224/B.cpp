#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll H, W;
    cin >> H >> W;
    vector<vector<ll>> A(H, vector<ll>(W));
    rep(i, H) rep(j, W) cin >> A.at(i).at(j);

    for(int i_1 = 0; i_1 < H; i_1++){
        for(int i_2 = i_1+1; i_2 < H; i_2++){
            for(int j_1 = 0; j_1 < W; j_1++){
                for(int j_2 = j_1+1; j_2 < W; j_2++){
                    if(A.at(i_1).at(j_1)+A.at(i_2).at(j_2)>A.at(i_2).at(j_1)+A.at(i_1).at(j_2)){
                        cout << "No" << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "Yes" << endl;

    return 0;
}