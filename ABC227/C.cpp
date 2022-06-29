#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N;
    cin >> N;
    ll count=0;
    for(ll A = 1; A <= N; A++){
        if(A*A*A > N){
            break;
        }
        for(ll B = A; B <= N; B++){
            if(A*B*B > N){
                break;
            }
            for(ll C = B; C <= N; C++){
                if(A*B*C <= N){
                    // cout << A << " " << B << " " << C << endl;
                    count++;
                }
            }
        }
    }
    cout << count << endl;

    return 0;
}