#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

string _S_(string S){
    return "(" + S + ")";
}
// ⇦N+M
void ST(vector<vector<string>>& dp, int N, int M){
    rep(j, dp.at(N).size()){
        rep(k, dp.at(M).size()){
            dp.at(N+M+1).push_back(dp.at(N).at(j)+dp.at(M).at(k));
        }
    }
}

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    int N;
    cin >> N;
    vector<vector<string>> dp(N/2);
    if(N%2 == 0){
        dp.at(0).push_back("()");
        for(int i = 1; i <= N/2-1; i++){
            // cout << i << endl;
            rep(j, dp.at(i-1).size()){
                dp.at(i).push_back(_S_(dp.at(i-1).at(j)));
            }
            // N=4
            if(i==1){
                ST(dp, 0, 0);
            }
            // N=6
            if(i==2){
                ST(dp, 0, 1);
                ST(dp, 1, 0);
            }
            if(i==3){
                ST(dp, 0, 2);
                ST(dp, 1, 1);
                ST(dp, 2, 0);
            }
            if(i==4){
                ST(dp, 0, 3);
                ST(dp, 1, 2);
                ST(dp, 2, 1);
                ST(dp, 3, 0);
            }
            if(i==5){
                ST(dp, 0, 4);
                ST(dp, 1, 3);
                ST(dp, 2, 2);
                ST(dp, 3, 1);
                ST(dp, 4, 0);
            }
            if(i==6){
                ST(dp, 0, 5);
                ST(dp, 1, 4);
                ST(dp, 2, 3);
                ST(dp, 3, 2);
                ST(dp, 4, 1);
                ST(dp, 5, 0);
            }
            if(i==7){
                ST(dp, 0, 6);
                ST(dp, 1, 5);
                ST(dp, 2, 4);
                ST(dp, 3, 3);
                ST(dp, 4, 2);
                ST(dp, 5, 1);
                ST(dp, 6, 0);
            }
        }
        sort(all(dp.at(N/2-1)));
        dp.at(N/2-1).erase(unique(all(dp.at(N/2-1))), dp.at(N/2-1).end());
        rep(i, dp.at(N/2-1).size()){
            cout << dp.at(N/2-1).at(i) << endl;
        }
    }


    return 0;
}