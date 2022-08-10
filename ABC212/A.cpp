#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll A, B;
    cin >> A >> B;

    if(0<A && B==0){
        cout << "Gold" << endl;
    }else if(A==0 && 0 < B){
        cout << "Silver" << endl;
    }else{
        cout << "Alloy" << endl;
    }

    return 0;
}