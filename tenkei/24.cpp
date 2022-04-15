#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main (void){
    // ifstream in("./../input.tt");
    // cin.rdbuf(in.rdbuf());

    int N, K;
    cin >> N >> K;
    vector<int> A(N), B(N);
    rep(i, N) cin >> A.at(i);
    rep(i, N) cin >> B.at(i);

    if(K%2 == (accumulate(A.begin(),A.end(),0)+accumulate(B.begin(),B.end(),0))%2){
        rep(i, N) K -= abs(A.at(i) - B.at(i));
        if(K >= 0){
            cout << "Yes" << endl;    
            return 0;
        }
    }
    cout << "No" << endl;
    

    return 0;
}