#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N, K, X, Y;
    cin >> N >> K >> X >> Y;

    if(N > K){
        cout << X*K+(N-K)*Y << endl;
    }else{
        cout << X*K << endl;
    }
    return 0;
}