#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    int N, M;
    cin >> N >> M;
    // vector<ll> A(M), B(M);
    // rep(i, M) cin >> A.at(i) >> B.at(i);
    if(N <= M){
        cout << "No" << endl;
        return 0;
    }
    // N, count
    map<ll, ll> mp;
    rep(i, M){
        int A, B;
        cin >> A >> B;
        mp[A]++;
        if(mp[A]>2){
            cout << "No" << endl;
            return 0;
        }
        mp[B]++;
        if(mp[B]>2){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    

    return 0;
}