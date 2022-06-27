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
    vector<ll> score(N), sort_score(N);
    rep(i, N){
        int A, B, C;
        cin >> A >> B >> C;
        score.at(i) = A + B + C;
    }

    sort_score = score;
    sort(all(sort_score));

    // 閾値
    ll threshold = sort_score.at(N-K)-300;

    rep(i, N){
        if(score.at(i) >= threshold){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }

    return 0;
}