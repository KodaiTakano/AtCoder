#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    string S;
    cin >> S;

    if(S.at(S.size()-1)=='r'){
        cout << "er" << endl;
    }
    if(S.at(S.size()-1)=='t'){
        cout << "ist" << endl;
    }

    return 0;
}