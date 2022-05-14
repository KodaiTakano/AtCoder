#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define rep1(i, n) for (ll i = 1; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    ifstream in("./../input.txt");
    cin.rdbuf(in.rdbuf());

    ll N, W;
    cin >> N >> W;
    vector<ll> A(N);
    rep(i, N){
        cin >> A.at(i);
    }
    sort(all(A));
    map<ll,ll> mp;

    rep(i, N){
        if(A.at(i) > W){
            break;
        }
        mp[A.at(i)]++;
        for(int j=i+1; j < N; j++){
            if(A.at(i)+A.at(j) > W){
                break;
            }
            mp[A.at(i)+A.at(j)]++;
            for(int k=j+1; k < N; k++){
                if(A.at(i)+A.at(j)+A.at(k) > W){
                   break;
                }
                mp[A.at(i)+A.at(j)+A.at(k)]++;
            }
        }
    }

    ll count=0;
    for(auto itr = mp.begin(); itr != mp.end(); itr++) {
        if(itr->first <= W){
            count++;
        }else{
            break;
        }
    }
    cout << count << endl;

    return 0;
}