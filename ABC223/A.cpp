#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll X;
    cin >> X;
    
    if(X>=100 && X%100==0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}