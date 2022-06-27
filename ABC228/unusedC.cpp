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
    vector<pair<ll, ll>> score(N);
    rep(i, N){
        int A, B, C;
        cin >> A >> B >> C;
        score.at(i).first = A + B + C;
        score.at(i).second = i;
    }

    sort(all(score));
    
    // rep(i, N){
    //     cout << score.at(i).first << " " << score.at(i).second << endl;
    // }

    // 閾値
    ll threshold;
    // 今K位にいる人の点数-300が閾値
    int rank=1;
    for(int i = N-1; i > 0; i--){
        if(rank == K){
            threshold = score.at(i).first-300;     
        }
        if(score.at(i).first != score.at(i-1).first){
            rank = N-i+1;
        }
    }


    vector<bool> ans(N);
    rep(i, N){
        if(score.at(i).first >= threshold){
            ans.at(score.at(i).second) = true;
        }
    }

    rep(i, N){
        if(ans.at(i) == true){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }

    }

    return 0;
}