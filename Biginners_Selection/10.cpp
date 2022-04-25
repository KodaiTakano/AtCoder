#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

// 時刻tに(x,y)に存在することが可能なら1
bool check(int t_i, int x_i, int y_i, int t_i_1=0, int x_i_1=0, int y_i_1=0, int i=0){
    // t(i-1)の座標からt(i)の座標に移動できるか確認
    if(i > 0 && ((t_i-t_i_1) < (abs(x_i-x_i_1)+abs(y_i-y_i_1)))) return 0;
    
    if((x_i+y_i) <= t_i){
        switch ((x_i+y_i)%2){
            case 0:
                if(t_i%2 == 0) return 1;
                break;
            case 1:
                if(t_i%2 == 1) return 1;
                break;
            default:
                return 0;
        }
    }
    return 0;
}

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    int N;
    cin >> N;
    vector<int> t(N), x(N), y(N);
    rep(i, N) cin >> t.at(i) >> x.at(i) >> y.at(i);

    rep(i,N){
        if(i == 0){
            if(!check(t.at(i), x.at(i), y.at(i))){
                cout << "No" << endl;
                return 0;
            }
        }else{
            // 本当はt, x, yそのものを渡したかったけど、計算時間オーバーになった
            if(!check(t.at(i), x.at(i), y.at(i), t.at(i-1), x.at(i-1), y.at(i-1), i)){
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;

    return 0;
}