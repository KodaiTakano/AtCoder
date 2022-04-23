#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 1; i < (n+1); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    int N, M;
    cin >> N >> M;
    map<int, int> num_count;
    rep(i, N){
        num_count[i] = 0;
    }
    int A, B, bigger;
    rep(i, M){
        cin >> A >> B;
        num_count[max(A, B)]++;
    }
    int ans = 0;
    rep(i, N){
        if(num_count[i] == 1){
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}