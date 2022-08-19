#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N, A, X, Y;
    cin >> N >> A >> X >> Y;

    if(N <= A){
        cout << N*X << endl;
    }else{
        cout << A*X+(N-A)*Y << endl;
    }

    return 0;
}