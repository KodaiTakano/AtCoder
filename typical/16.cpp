#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    int N, A, B, C;
    cin >> N >> A >> B >> C;
    int ans=10000;
    rep(i, 10000){
        // nをi枚使った時の金額
        int n_i = N;
        if(n_i < A*i){
            break;
        }
        // cout << "i=" << i << endl;
        n_i -= A*i;
        for(int j = 0; i + j < 10000; j++){
            int n_i_j = n_i;
            // cout << "j=" << j << endl;
            if(n_i_j < B*j){
                break;
            }
            n_i_j -= B*j;
            // cout << n << endl;
            if(n_i_j%C == 0 && ans > i + j + n_i_j/C){
                ans = i + j + n_i_j/C;
            }
        }
    }
    cout << ans << endl;

    return 0;
}