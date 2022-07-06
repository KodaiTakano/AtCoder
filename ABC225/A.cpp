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
    
    if(S.at(0) == S.at(1) && S.at(1)==S.at(2)){
        cout << "1" << endl;
    }else if((S.at(0) == S.at(1)) ||  (S.at(0) == S.at(2)) || (S.at(1) == S.at(2))){
        cout << "3" << endl;
    }else{
        cout << "6" << endl;
    }

    return 0;
}