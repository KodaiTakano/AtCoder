#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N, K, A;
    cin >> N >> K >> A;
    
    while(true){
        // cout << A << " " << K << endl;
        if(A+K-1 <= N){
            cout << A+K-1 << endl;
            return 0;    
        } 
        K-=N-A+1;
        A=1;
    }

    return 0;
}