#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define ll long long
#define mod 998244353

int main (void){

    int N;
    cin >> N;

    // int count=0;
    // int x, x_10;
    // rep(i, pow(N+1, 10)){
    //     x = i + 11;
    //     while(1){
    //         x_10 = x%10;
    //         x /= 10;
    //         if(abs(x_10-x%10) > 2) break;
    //         if(x < 10){
    //             count++;
    //             break;
    //         }
    //     }
    // }

    // cout << 998244354 % count << endl;

    vector<vector<ll>> dp(N+1, vector<ll>(10));

    // 初期値
    for(int j = 1; j < 10; j++){
        dp.at(1).at(j) = 1;
    }

    for(int i = 2; i < N+1; i++){
        for(int j = 1; j < 10; j++){
            if(j == 1){
                dp.at(i).at(j) = dp.at(i-1).at(j) + dp.at(i-1).at(j+1);
                dp.at(i).at(j) %= mod;
            }else if(j == 9){
                dp.at(i).at(j) = dp.at(i-1).at(j-1) + dp.at(i-1).at(j);
                dp.at(i).at(j) %= mod;
            }else{
                dp.at(i).at(j) = dp.at(i-1).at(j-1) + dp.at(i-1).at(j) + dp.at(i-1).at(j+1);
                dp.at(i).at(j) %= mod;
            }
        }
    }

    // for(int i = 1; i < N+1; i++){
    //     for(int j = 1; j < 10; j++){
    //         cout << dp.at(i).at(j) << " ";
    //     }
    //     cout << endl;
    // }
    
    ll sum = 0;
    for(int j = 1; j < 10; j++){
        sum += dp.at(N).at(j);
        sum %= 998244353;
    }

    cout << sum << endl;

    return 0;
} 