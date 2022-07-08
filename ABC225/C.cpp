#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N, M;
    cin >> N >> M;
    ll B;
    cin >> B;
    int first_j = B%7, first_i = (B-first_j)/7+1;
    // cout << i << " " << j << endl;
    int j = first_j+1, i = first_i;
    rep(k, N){
        if(k == 0){
            rep1(l, M){
                cin >> B;
                if(B != (i-1)*7+j){
                    // cout << k << " " << l << endl;
                    // cout << "B=" << B << endl;
                    // cout << i << " " << j << endl;
                    cout << "No" << endl;
                    return 0;
                }
                j++;
            }
            i++;
            j=first_j;
        }else{
            rep(l, M){
                cin >> B;
                if(B != (i-1)*7+j){
                    // cout << k << " " << l << endl;
                    // cout << "B=" << B << endl;
                    // cout << i << " " << j << endl;
                    cout << "No" << endl;
                    return 0;
                }
                j++;
            }
            i++;
            j=first_j;
        }
    }
    cout << "Yes" << endl;


    return 0;
}