#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep1(j, i, n)  for (int j = i+1; j < (n); j++)
#define ll long long 

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    int N, P ,Q;
    cin >> N >> P >> Q;
    vector<ll> A(N);

    rep(i, N) cin >> A.at(i);

    ll count = 0;
    rep(i, N-4){
        rep1(j, i, N-3){
            rep1(k, j, N-2){
                rep1(l, k, N-1){
                    rep1(m, l, N){
                        if(A.at(i)%P*A.at(j)%P*A.at(k)%P*A.at(l)%P*A.at(m)%P==Q) count++;
                    }
                }
            }
        }
    } 

    cout << count << endl;

    return 0;
}