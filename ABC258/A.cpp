#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll K;
    cin >> K;

    if(K<10){
        cout << "21:0" << K << endl;
    }else if(K<60){
        cout << "21:" << K << endl;
    }else if(K<70){
        cout << "22:0" << K-60 << endl;
    }else{
        cout << "22:" << K-60 << endl;
    }

    return 0;
}