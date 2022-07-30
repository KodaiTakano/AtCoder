#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    double A;
    cin >> A;
    // cout << A << endl;
    int X=A;
    // cout << X << endl;
    double Y=A-X;
    // cout << Y << endl;
    if(Y<=0.2){
        cout << X << "-" << endl;
    }else if(Y>=0.7){
        cout << X <<  "+" << endl;
    }else{
        cout << X << endl;
    }

    return 0;
}