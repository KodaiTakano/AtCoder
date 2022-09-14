#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    // 当たった回数, 外れた回数(デバッグ用)
    double hit=0, not_hit=0;
    // 前回当たったか(初回は50%の抽選をするためtrue)
    bool before_hit = true;
    // ガチャ回数
    double N=1000000;
    rep(i, N){
        // 前回当たっていれば50%の抽選
        if(before_hit==true){
            // 当たればhitを増やし、前回hitをtrueに
            if(rand()%2==0){
                hit++;
                before_hit=true;;
            }else{
                not_hit++;
                before_hit=false;
            }
        // 外れていれば確定hit
        }else{
            hit++;
            before_hit=true;
        }
    }
    cout << hit << endl;
    // 当たった確率
    cout << hit/N*100 << endl;

    return 0;
}