#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N, K;
    cin >> N >> K;
    vector<ll> a(N);
    rep(i, N) cin >> a.at(i);
    vector<ll> tempa=a;

    rep(i, N-K){
        // cout << "i= " << i << endl;
        if(a.at(i) > a.at(i+K)){
            // cout << "if1" << endl;
            int temp = a.at(i);
            a.at(i) = a.at(i+K);
            a.at(i+K) = temp;
            if(i - K >= 0){
                if(a.at(i) < a.at(i-K)){
                    i = i - K - 1;
                }
            }
        }
    }
    sort(all(tempa));
    rep(i, N){
        // cout << tempa.at(i) << " " << a.at(i) << endl;
        if(tempa.at(i) != a.at(i)){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    return 0;
}