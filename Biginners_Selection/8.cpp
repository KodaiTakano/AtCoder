#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main (void){
    ifstream in("./../input.txt");
    cin.rdbuf(in.rdbuf());

    int N, Y;
    cin >> N >> Y;

    // dp[n][y]: n枚でy円となることがありうるなら1,あり得ないなら0    
    vector<vector<int>> dp(N+1, vector<int>(Y+1));
    //　初期値
    dp.at(0).at(0) = 1;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < Y+1; j+=1000){
            // cout << j << endl;
            if(dp.at(i).at(j) == 1){
                if(j + 1000 <= Y) dp.at(i+1).at(j+1000) = 1;
                if(j + 5000 <= Y) dp.at(i+1).at(j+5000) = 1;
                if(j + 10000 <= Y) dp.at(i+1).at(j+10000) = 1;
            }
        }
    }

    cout << "check" << endl;


    if(dp.at(N).at(Y) == 1){

    }else{
        cout << "-1 -1 -1" << endl;
    }

    return 0;
}