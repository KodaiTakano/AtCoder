#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    // L2 R1
    if(l2<r1){
        if(r2<l1){
            cout << "0" << endl;
            return 0;
        }
        // L1 L2 R1
        if(l1 < l2){
            // L1 L2 R1 R2
            if(r1 < r2){
                cout << r1-l2 << endl;
            // L1 L2 R2 R1
            }else{
                cout << r2-l2 << endl;
            }
        // L2 L1 R1 
        }else{
            // L2 L1 R1 R2
            if(r1 < r2){
                cout << r1-l1 << endl;
            // L2 L1 R2 R1
            }else{
                cout << r2-l1 << endl;
            }
        }
    }else{
        cout << "0" << endl;
    }

    return 0;
}