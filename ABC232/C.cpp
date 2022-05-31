#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    int N, M;
    cin >> N >> M;
    if(M==0){
        cout << "Yes" << endl;
        return 0;
    }
    vector<vector<int>> AB(M, vector<int>(2)), CD(M, vector<int>(2));
    rep(i, M) cin >> AB.at(i).at(0) >> AB.at(i).at(1);
    rep(i, M) cin >> CD.at(i).at(0) >> CD.at(i).at(1);
    vector<int> ball(N), aoki_ball(N);
    rep(i, N) ball.at(i)=i+1;

    vector<vector<int>> tempCD(M, vector<int>(2));
    // int count=0;
    // O(40000)
    do{
        rep(i, N){
            // cout << ball.at(i);
            aoki_ball.at(i) = ball.at(i);
        }
        // cout << endl;

        rep(i, M){
            tempCD.at(i).at(0)=aoki_ball.at(CD.at(i).at(0)-1);
            tempCD.at(i).at(1)=aoki_ball.at(CD.at(i).at(1)-1);
            if(tempCD.at(i).at(0) > tempCD.at(i).at(1)){
                int temp = tempCD.at(i).at(0);
                tempCD.at(i).at(0) = tempCD.at(i).at(1);
                tempCD.at(i).at(1) = temp;
            }
        }
        // rep(i, M){
        //     cout << tempCD.at(i).at(0) << " " << tempCD.at(i).at(1) << endl;
        // }
        // cout  << endl;
        // count++;
        // if(count ==2){
        //     return 0;
        // }

        // aoki_ball={3, 2, 1, 4};
        // rep(i, M){
        //     tempCD.at(i).at(0)=aoki_ball.at(CD.at(i).at(0)-1);
        //     tempCD.at(i).at(1)=aoki_ball.at(CD.at(i).at(1)-1);
        //     if(tempCD.at(i).at(0) > tempCD.at(i).at(1)){
        //         int temp = tempCD.at(i).at(0);
        //         tempCD.at(i).at(0) = tempCD.at(i).at(1);
        //         tempCD.at(i).at(1) = temp;
        //     }
        // }
        // rep(i, M){
        //     cout << tempCD.at(i).at(0) << " " << tempCD.at(i).at(1) << endl;
        // }
        // cout  << endl;

        // O(900)
        rep(i, M){
            // cout << i << endl;
            if(find(all(AB), tempCD.at(i))==AB.end()){
                break;
            }
            // cout << "a" << endl;
            if(i == M-1){
                cout << "Yes" << endl;
                return 0;
            }
        }
        // return 0;
    }while(next_permutation(all(ball)));
    cout << "No" << endl;


    return 0;
}