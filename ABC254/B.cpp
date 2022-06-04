#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    int N;
    cin >> N;

    vector<vector<ll>> A(N);
    A.at(0)={1};
    cout << A.at(0).at(0) << endl;

    rep1(i, N){
        A.at(i).push_back(1);
        rep1(j, i){
            A.at(i).push_back(A.at(i-1).at(j-1)+A.at(i-1).at(j)); 
        }
        A.at(i).push_back(1);
        rep(j, A.at(i).size()){
            cout << A.at(i).at(j) << " ";
        }
        cout << endl;
    }
        
    
    
    return 0;
}