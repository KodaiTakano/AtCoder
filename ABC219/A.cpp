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
    
    if(X<40){
        cout << 40-X << endl;
    }else if(X<70){
        cout << 70-X << endl;
    }else if(X<90){
        cout << 90-X << endl;
    }else{
        cout << "expert" << endl;
    }

    return 0;
}