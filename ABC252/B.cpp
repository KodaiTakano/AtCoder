#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define rep1(i, n) for (ll i = 1; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N, K;
    cin >> N >> K;
    // vector<ll> A(N), B(K);
    ll A, max = 0;
    vector<ll> max_index;
    rep(i, N){
        cin >> A;
        if(max < A){
            max = A;
            max_index.clear();
            max_index.push_back(i);
        }else if(max == A){
            max_index.push_back(i);
        }
    }
    // rep(i, max_index.size()) cout << max_index.at(i) << " ";
    // cout << endl;
    ll B;
    rep(i, K){
        cin >> B;
        if(binary_search(all(max_index), B-1)){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;


    return 0;
}