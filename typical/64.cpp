#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    ifstream in("./../input.txt");
    cin.rdbuf(in.rdbuf());

    int N, Q;
    cin >> N >> Q;
    vector<ll> A(N);
    // vector<ll> diff(N-1);
    // ll ans = 0;
    // rep(i, N){
    //     cin >> A.at(i);
    //     if(i > 0){
    //         diff.at(i-1) = A.at(i) - A.at(i-1);
    //         ans += abs(diff.at(i-1));
    //     }
    // }

    // int L, R, V;
    // rep(i, Q){
    //     cin >> L >> R >> V;
    //     if(L >= 2){
    //         diff.at(L-2) += V;
    //         ans += abs(diff.at(L-2));
    //     }
    //     if(R != N){
    //         diff.at(R-1) -= V;
    //         ans += abs(diff.at(R-1));
    //     }
    //     cout << ans << endl;
    // }

    return 0;
}