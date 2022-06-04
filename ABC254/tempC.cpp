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
    if(N-K == 1){
        cout << "Yes" << endl;
        return 0;
    }
    vector<ll> tempa(N);

    vector<vector<ll>> A(K);
    rep(i, K){
        for(int j = i; j < N; j += K){
            A.at(i).push_back(a.at(j));
        }
    }
    rep(i, K){
        sort(all(A.at(i)));
    }

    vector<ll> aftera(N);
    int count=0;
    rep(j, A.at(0).size()){
        rep(i, K){
            aftera.push_back(A.at(i).at(j));
            if(count == N){
                break;
            }
            count++;
        }
        if(count == N){
            break;
        }
    }

    sort(all(tempa));
    rep(i, N){
        if(tempa.at(i) != aftera.at(i)){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    return 0;
}