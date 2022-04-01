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

    rep(i, N){
        for(int j = i + 1; j < N; j++){
            if(Y.at(i) == Y.at(j)){
                if(X.at(i) < X.at(j) && S.at(i) == 'R' && S.at(j) == 'L'){
                    cout << "Yes" << endl;
                    return 0;
                }
                if(X.at(i) > X.at(j) && S.at(i) == 'L' && S.at(j) == 'R'){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;
}