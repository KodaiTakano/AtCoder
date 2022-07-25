#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    int N, ans=0;
    cin >> N;
    rep(i, N){
        ans += i+1;
    }
    cout << ans << endl;

    return 0;
}