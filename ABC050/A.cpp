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
    char op;
    cin >> A >> op >> B;
    if(op=='+'){
        cout << A+B << endl;
    }else{
        cout << A-B << endl;
    }

    return 0;
}