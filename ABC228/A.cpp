#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    int S, T, X;
    cin >> S >> T >> X;

    if(S < T){
        if(S < X && X < T){
            // cout << "a" << endl;
            cout << "Yes" << endl;
            return 0;
        }
    }else{
        if(S <= X && X < 24){
            // cout << "b" << endl;
            cout << "Yes" << endl;
            return 0;
        }
        if(0 <= X && X < T){
            // cout << "c" << endl;
            cout << "Yes" << endl;
            return 0;
        }
        
    }
    cout << "No" << endl;
    return 0;
}