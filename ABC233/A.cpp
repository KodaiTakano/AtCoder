#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll X, Y;
    cin >> X >> Y;
    if(Y-X-1 >= 0){
        cout << (Y-X-1)/10+1 << endl;
    }else{
        cout << "0" << endl;
    }
    return 0;
}