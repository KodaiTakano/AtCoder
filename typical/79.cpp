#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    int H, W;
    cin >> H >> W;
    ll Asum_mod4=0, Bsum_mod4=0;
    vector<vector<int>> A(H, vector<int>(W)), B(H, vector<int>(W));
    rep(i, H){
        rep(j, W){
            cin >> A.at(i).at(j);
            Asum_mod4 += A.at(i).at(j)%4;
        }
    }
    rep(i, H){
        rep(j, W){
            cin >> B.at(i).at(j);
            Bsum_mod4 += B.at(i).at(j)%4;
        }
    }
    int diff;
    ll count=0;
    if(Asum_mod4%4 == Bsum_mod4%4){
        cout << "Yes" << endl;
        rep(i, H-1){
            rep(j, W-1){
                diff = A.at(i).at(j)-B.at(i).at(j);
                A.at(i+1).at(j) -= diff;
                A.at(i+1).at(j+1) -= diff;
                A.at(i).at(j+1) -= diff;
                count += abs(diff);
            }
        }
        cout << count << endl;
    }else{
        cout << "No" << endl;
    }



    return 0;
}