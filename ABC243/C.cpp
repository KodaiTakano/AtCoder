#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main (void){

    int N;
    cin >> N;

    vector<int> X(N);
    vector<int> Y(N);
    rep(i, N) cin >> X.at(i) >> Y.at(i);

    string S;
    cin >> S;

    // rep(i, N){
    //     for(int j = i + 1; j < N; j++){
    //         if(Y.at(i) == Y.at(j)){
    //             if(X.at(i) < X.at(j) && S.at(i) == 'R' && S.at(j) == 'L'){
    //                 cout << "Yes" << endl;
    //                 return 0;
    //             }
    //             if(X.at(i) > X.at(j) && S.at(i) == 'L' && S.at(j) == 'R'){
    //                 cout << "Yes" << endl;
    //                 return 0;
    //             }
    //         }
    //     }
    // }
    // cout << "No" << endl;
    // return 0;

    // 右(左)を向いているもので一番小さい(大きい)もの(キー:y, 値:x)
    map<int, int> right_min;
    map<int, int> left_max;

    // cout << right_min[0] << endl;

    rep(i, N){
        // 衝突確認
        if(S.at(i) == 'R'){
            if(left_max[Y.at(i)] != 0 && X[i] < left_max[Y.at(i)]){
                cout << "Yes" << endl;
                return 0;
            }
        }else{
            if(right_min[Y.at(i)] != 0 && X[i] > right_min[Y.at(i)]){
                cout << "Yes" << endl;
                return 0;
            }
        }

        // map更新
        if(S.at(i) == 'R'){
            // right_minの値のデフォ値が0のため, X=0のものは区別する
            if(X.at(i) == 0){
                right_min[Y.at(i)] = -1;
            }
            // Y座標被り1週目
            if(right_min[Y.at(i)] == 0){
                right_min[Y.at(i)] = X.at(i);
            }
            // Y座標被り2週目以降
            if(right_min[Y.at(i)] > X.at(i)){
                right_min[Y.at(i)] = X.at(i);
            }
        }else{
            // Y座標被り1週目
            if(left_max[Y.at(i)] == 0){
                left_max[Y.at(i)] = X.at(i);
            }
            // Y座標被り2週目以降
            if(left_max[Y.at(i)] < X.at(i)){
                left_max[Y.at(i)] = X.at(i);
            }
        }
    }
    cout << "No" << endl;
    return 0;
}