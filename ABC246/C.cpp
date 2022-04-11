#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    int N, K, X;
    cin >> N >> K >> X;
    vector<int> A(N);
    rep(i, N) cin >> A.at(i);

    // 現在のクーポン数
    int coupon = K;
    // 0円未満にならないようにクーポンを使う。
    rep(i,N){
        // クーポン使用枚数
        int used_coupon = 0; 
        if(A.at(i) >= X && coupon > 0){
            used_coupon = min(A.at(i) / X, coupon);
            // cout << A.at(i) << endl;
            // cout << used_coupon << endl;
            A.at(i) -= used_coupon * X;
            coupon -= used_coupon;
        }else if(coupon == 0){
            break;
        }
    }

    // どの商品にクーポンを使っても0円未満になってしまうとき
    if(*max_element(A.begin(), A.end()) < X && coupon > 0){
        sort(A.begin(), A.end());
        int i = A.size();
        while(true){
            i--;
            A.at(i) = 0;
            coupon--;
            if(i == 0 || coupon == 0){
                break;
            }
        }
    }

    cout << accumulate(A.begin(), A.end(), 0) << endl;

    return 0;
}