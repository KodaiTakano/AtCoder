#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    int N;
    cin >> N;
    vector<vector<int>> A(N, vector<int>(N));
    rep(i, N) rep(j, N) cin >> A.at(i).at(j);
    int M;
    cin >> M;
    vector<int> X(M), Y(M);
    rep(i, M){
        cin >> X.at(i);
        cin >> Y.at(i);
    }

    vector<int> run_place(N);
    rep(i, N) run_place.at(i) = i;
    int ans=10001;
    // O(N!)
    do{
        // debug
        // rep(i, N) cout << run_place.at(i);
        // cout << endl; 

        // O(N^2)
        int count=0;
        rep(i, M){
            if(abs(run_place.at(X.at(i)-1) - run_place.at(Y.at(i)-1)) != 1){
                count++;
            }
        }
        if(count == M){
            int time=0;
            // O(N)
            rep(i, N){
                time += A.at(i).at(run_place.at(i));
            }
            if(time < ans){
                ans = time;
                // cout << ans << endl;
            }
        }
    }while(next_permutation(all(run_place)));

    if(ans == 10001){
        cout << "-1" << endl;
    }else{
        cout << ans << endl;
    }
    return 0;
}