#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());
    
    int N;
    cin >> N;
    int C, P;
    vector<int> sum1(N+1), sum2(N+1);
    for(int i = 1; i < N+1; i++){
        cin >> C >> P;
        if(C == 1){
            sum1.at(i) = sum1.at(i-1) + P;
            sum2.at(i) = sum2.at(i-1);
        }else{
            sum1.at(i) = sum1.at(i-1);
            sum2.at(i) = sum2.at(i-1) + P;
        }
    }
    // rep(i, N+1){
    //     cout << sum1.at(i) << " ";
    // }
    // cout << endl;
    // rep(i, N+1){
    //     cout << sum2.at(i) << " ";
    // }
    // cout << endl;
    int Q;
    cin >> Q;
    int L, R;
    rep(i, Q){
        cin >> L >> R;
        cout << sum1.at(R)-sum1.at(L-1) << " " << sum2.at(R)-sum2.at(L-1) << endl;
    }

    return 0;
}