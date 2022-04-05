#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main (void){
    ifstream in("./../input.txt");
    cin.rdbuf(in.rdbuf());

    int N, X;
    cin >> N >> X;
    vector<int> a(N), b(N);
    rep(i, N) cin >> a.at(i) >> b.at(i);

    vector<int> dp(N);
    vector<int> ep(N);

    dp.at(N) = X;
    dp.at(N) = X;

    for(int i=N-1; i > 0; i--){
        dp.at(i) = dp.at(i+1) - a.at(i+1);
        ep.at(i) = dp.at(i+1) - b.at(i+1);
        if(dp.at(i) < i-1){
            dp.at(i) = dp.at(i+1) - b.at(i+1);
        }            
        if(ep.at(i) < i-1){
            ep.at(i) = dp.at(i+1) - a.at(i+1);
        }
    }



    cout << "No" << endl;

    return 0;
}