#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

bool check(vector<string> S){
    // 連続している#の数
    int count = 0;
    // 横
    cout << "yoko" << endl;
    rep(i, S.size()){
        rep(j, S.size()){
            if(S.at(i).at(j) == '#'){
                count++;
                if(count == 6){
                    return true;
                }
            }else{
                count = 0;
            }
        }
        count = 0;
    }

    // 縦
    cout << "tate" << endl;
    rep(j, S.size()){
        rep(i, S.size()){
            if(S.at(i).at(j) == '#'){
                count++;
                if(count == 6){
                    return true;
                }
            }else{
                count = 0;
            }
        }
        count = 0;
    }

    // 右下斜め
    cout << "migisita" << endl;
    rep(i, S.size()-5){
        rep(j ,S.size()-5){
            rep(k, 6){
                if(S.at(i+k).at(j+k) == '#'){
                    count++;
                    if(count == 6){
                        return true;
                    }
                }
            }
            count = 0;
        }
        count = 0;
    }

    // 左下斜め
    cout << "hidarisita" << endl;
    rep(i, S.size()-5){
        for (int j = S.size()-1; j >= 5; j--){
            rep(k, 6){
                // cout << j-k << endl;
                if(S.at(i+k).at(j-k) == '#'){
                    count++;
                    if(count == 6){
                        return true;
                    }
                }
            }
            count = 0;
        }
        count = 0;
    }
    
    return false;
}

int main (void){

    int N;
    cin >> N;
    vector<string> S(N);
    rep(i,N) cin >> S.at(i);

    // 1つ塗る
    rep(i, N){
        rep(j, N){
            if(S.at(i).at(j) == '.'){
                S.at(i).at(j) = '#';
                if(check(S)){
                    cout << "Yes" << endl;
                    return 0;
                }else{
                    S.at(i).at(j) = '.';
                }

            }
        }
    }

    rep(i, N){
        rep(j, N){
            if(S.at(i).at(j) == '.'){
                S.at(i).at(j) = '#';
                for(int k = j + 1; k < N; k++){
                    if(S.at(i).at(j) == '.'){
                        S.at(i).at(j) = '#';
                    }
                }
            }
        }
    }


    // bool answer = check(S);

    // if(answer){
    //     cout << "Yes" << endl;
    // }else{
    //     cout << "No" << endl;
    // }





    return 0;
}