#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

bool isoneten(ll oneten, ll x){
    if(oneten == x){
        return true;
    }else{
        return false;
    }
}

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    int N;
    cin >> N;
    vector<ll> A(N);
    rep(i, N) cin >> A.at(i);

    ll oneten;
    if(accumulate(all(A),0)%10==0){
        oneten = accumulate(all(A),0) / 10;
    }else{
        cout << "No" << endl;
        return 0;
    }
    // A.at(i)から数え始める
    rep(i, N){
        ll sum = 0;
        // cout << "i=" << i << endl;
        for(ll j = i; ;j++){
            // cout << "j=" << j << endl;
            if(j < N){
                sum += A.at(j);
            }else{
                sum += A.at(j-N);
            }
            // cout << sum << endl;
            if(sum > oneten){
                break;
            }
            if(isoneten(oneten, sum)){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;

    return 0;
}