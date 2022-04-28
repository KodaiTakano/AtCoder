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
    vector<int> a(N);
    rep(i, N) cin >> a.at(i);

    int sum = accumulate(all(a), 0);
    int ave = sum/N;
    // cout << ave << endl;
    ll ans0=0, ans1=0;
    rep(i, N){
        ans0 += (a.at(i) - ave)*(a.at(i) - ave);
        ans1 += (a.at(i) - (ave + 1))*(a.at(i) - (ave + 1));
    }
    if(ans0 < ans1){
        cout << ans0 << endl;
    }else{
        // cout << "a" << endl;
        cout << ans1 << endl;
    }

    return 0;
}