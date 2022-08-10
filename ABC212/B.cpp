#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    string X;
    cin >> X;
    
    if(X.at(0)==X.at(1) && X.at(1)==X.at(2) && X.at(2)==X.at(3)){
        cout << "Weak" << endl;
        return 0;
    }
    rep(i, 3){
        int a = int(X.at(i)-'0');
        int b = int(X.at(i+1)-'0'); 
        if(a == 9){
            if(b != 0){
                cout << "Strong" << endl;
                return 0;
            }
        }else{
            if(a+1 != b){
                cout << "Strong" << endl;
                return 0;
            }
        }
    }
    cout << "Weak" << endl;

    return 0;
}