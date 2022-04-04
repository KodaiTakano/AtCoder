#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main (void){

    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    vector<int> B(M);
    rep(i, N) cin >> A.at(i);
    rep(i, M) cin >> B.at(i);
    
    int ok = 0;
    rep(i, M){
        rep(j, N){
            if(B.at(i) == A.at(j)){
                A.at(j) = 0;
                ok++;
                break;
            }
            // cout << A.at(j) << " ";
        }
        // cout << endl;
    }

    if(ok == M){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}