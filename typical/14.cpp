#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    int N;
    cin >> N;
    vector<int> A(N);
    rep(i, N) cin >> A.at(i);
    vector<int> B(N);
    rep(i, N) cin >> B.at(i);
    sort(all(A));
    sort(all(B));

    ll dis=0;
    rep(i, N){
        dis += abs(A.at(i)-B.at(i));
    }
    cout << dis << endl;

    return 0;
}