#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    string S;
    cin >> S;

    if(S.size()%2==0){
        cout << S.at(S.size()/2+1) << endl;
    }else{
        cout << S.at(S.size()/2) << endl;
    }

    return 0;
}