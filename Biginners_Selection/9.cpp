#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

bool check(string S, int j, int n){
    if(S.size() == j + n){
        return 1;    
    }
    return 0;
}

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    string S;
    cin >> S;
    
    // dp[i][j]:nはSのj文字目からチェック。i回目にSのj文字以降ができれば1
    vector<vector<int>> dp((100000/5), vector<int>(S.size()));

    dp.at(0).at(0) = 1;

    rep(i, 100000/5){
        rep(j, S.size()){
            if(dp.at(i).at(j) == 1){
                if(S.size() - j >= 5){
                    if(S.substr(j,5) == "dream"){
                        if(check(S, j, 5)){
                            cout << "Yes" << endl;
                            return 0;
                        }
                        dp.at(i+1).at(j+5) = 1;
                    }
                }
                if(S.size() - j >= 7){
                    if(S.substr(j,7) == "dreamer"){
                        if(check(S, j, 7)){
                            cout << "Yes" << endl;
                            return 0;
                        }
                        dp.at(i+1).at(j+7) = 1;
                    }
                }
                if(S.size() - j >= 5){
                    if(S.substr(j,5) == "erase"){
                        if(check(S, j, 5)){
                            cout << "Yes" << endl;
                            return 0;
                        }
                        dp.at(i+1).at(j+5) = 1;
                    }
                }
                if(S.size() - j >= 6){
                    if(S.substr(j,6) == "eraser"){
                        if(check(S, j, 6)){
                            cout << "Yes" << endl;
                            return 0;
                        }
                        dp.at(i+1).at(j+6) = 1;
                    }
                }
            }
        }
    }

    cout << "No" << endl;

    return 0;
}