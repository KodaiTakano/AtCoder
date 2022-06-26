#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N, X;
    cin >> N >> X;
    vector<ll> A(N);
    rep(i, N) cin >> A.at(i);

    // mp[x, y]:友達xが何回呼ばれたか
    map<ll, ll> mp;
    mp[X]++;
    // Aの何番名が呼ばれるか
    int index = A.at(X-1)-1;
    // cout << index << endl;
    rep(i, N){
        // cout << "A" << A.at(index) << endl;
        mp[index+1]++;
        if(mp[index+1] > 1){
            cout << mp.size() << endl;
            return 0;
        }
        index = A.at(index)-1;
        // cout << index << endl;
    }
    cout << N << endl;

    return 0;
}