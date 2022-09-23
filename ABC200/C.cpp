#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N;
    cin >> N;
    vector<ll> A(N);
    rep(i, N){
        ll a;
        cin >> a;
        A.at(i)=a%200;
    }
    sort(all(A));
    ll ans=0, count=1;
    // rep(i, N){
        // cout << A.at(i) << endl;
    // }
    rep(i, N-1){
        if(A.at(i)==A.at(i+1)){
            count++;
        }else{
            ans+=count*(count-1)/2;
            count=1;
        }
        // cout << count << endl;
    }
    cout << ans+count*(count-1)/2 << endl;


    return 0;
}