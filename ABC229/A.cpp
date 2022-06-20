#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    ifstream in("./../input.txt");
    cin.rdbuf(in.rdbuf());

    string S1, S2;
    cin >> S1 >> S2;

    if(S1.at(0)=='#'){
        if(S1.at(1)!='#' && S2.at(0)!='#'){
            cout << "No" << endl;
            return 0;
        }
    }
    if(S1.at(1)=='#'){
        if(S1.at(0)!='#' && S2.at(1)!='#'){
            cout << "No" << endl;
            return 0;
        }
    }
    if(S2.at(0)=='#'){
        if(S1.at(0)!='#' && S2.at(1)!='#'){
            cout << "No" << endl;
            return 0;
        }
    }
    if(S2.at(1)=='#'){
        if(S1.at(1)!='#' && S2.at(0)!='#'){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
    
    return 0;
}