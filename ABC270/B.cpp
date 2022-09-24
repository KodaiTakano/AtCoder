#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll X, Y, Z;
    cin >> X >> Y >> Z;

    if(0<X){
        if(0<Y && Y<X){
            if(Z<Y){
                if(0<Z){
                    cout << X << endl;
                    return 0;
                }else{
                    cout << X-Z*2 << endl;
                    return 0;
                }
            }else{
                cout << -1 << endl;
                return 0;
            }
        }else{
            cout << X << endl;
            return 0;
        }
    }else if(X<0){
        if(X<Y && Y<0){
            if(Y<Z){
                if(Z<0){
                    cout << -X << endl;
                    return 0;
                }else{
                    cout << -X+Z*2 << endl;
                    return 0;
                }
            }else{
                cout << -1 << endl;
                return 0;
            }
        }else{
            cout << -X << endl;
            return 0;
        }
    }

    return 0;
}