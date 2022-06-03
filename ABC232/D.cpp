#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    int H, W;
    cin >> H >> W;
    vector<string> C(H);
    rep(i, H) {
        cin >> C.at(i);
    }

    vector<vector<ll>> dp(H, vector<ll>(W));
    dp.at(0).at(0)=1;
    rep1(i, H){
        if(C.at(i).at(0)=='.'){
            dp.at(i).at(0)=dp.at(i-1).at(0)+1;
        }else{
            break;
        }
    }
    rep1(i, W){
        if(C.at(0).at(i)=='.'){
            dp.at(0).at(i)=dp.at(0).at(i-1)+1;
        }else{
            break;
        }
    }
    rep1(j, min(H,W)){
        if(dp.at(j-1).at(j)==0 && dp.at(j).at(j-1)==0){
            break;
        }
        if(C.at(j).at(j) == '.'){
            dp.at(j).at(j) = max(dp.at(j).at(j-1)+1, dp.at(j-1).at(j)+1);
        }
        for(int i = j+1; i < H; i++){
            if(dp.at(i-1).at(j)==0 && dp.at(i).at(j-1)==0){
                break;
            }
            if(C.at(i).at(j)=='.'){
                dp.at(i).at(j)=max(dp.at(i-1).at(j)+1, dp.at(i).at(j-1)+1);
            }else{
                break;
            }
        }
        for(int i = j+1; i < W; i++){
            if(dp.at(j).at(i-1)==0 && dp.at(j-1).at(i)==0){
                break;
            }
            if(C.at(j).at(i)=='.'){
                dp.at(j).at(i)=max(dp.at(j).at(i-1)+1, dp.at(j-1).at(i)+1);
            }else{
                break;
            }
        }
    }

    // rep1(i, H){
    //     rep1(j, W){
    //         if(C.at(i).at(j) == '.'){
    //             dp.at(i).at(j) = max(dp.at(i).at(j-1)+1, dp.at(i-1).at(j)+1);
    //         }else{
    //             dp.at(i).at(j) = 0;
    //         }
    //     }
    // }

    // rep(i, H){
    //     rep(j, W){
    //         cout << dp.at(i).at(j) << " ";
    //     }
    //     cout << endl;
    // }

    int max = 0;
    rep(i, H){
        rep(j, W){
            if(max < dp.at(i).at(j)){
                max = dp.at(i).at(j);
            }
        }
    }
    cout << max << endl;



    return 0;
}