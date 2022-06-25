#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N, K, Q;
    cin >> N >> K >> Q;
    vector<ll> A(K), L(Q);
    rep(i, K) cin >> A.at(i);
    rep(i, Q) cin >> L.at(i);

    vector<bool> mass(N); // 出力の際は+1すること
    rep(i, K){
        mass.at(A.at(i)-1) = true;
    }
    rep(i, Q){
        // cout << "i=" << i << endl;
        // 動かすコマの場所を探す
        int place;
        // 何番目か
        int count=0;
        rep(j, N){  
            // cout << "j=" << j << endl;
            // cout << count << endl;
            if(mass.at(j) == true){
                count++;
            }
            if(count == L.at(i)){
                place = j;
                // cout << place << endl;
                break;
            }
        }
        if(place == N-1 || mass.at(place+1) == true){
            continue;
        }else{
            mass.at(place) = false;
            mass.at(place+1) = true;
        }    
    }

    rep(i, N){
        if(mass.at(i) == true){
            cout << i+1 << endl;
        }
    }

    return 0;
}