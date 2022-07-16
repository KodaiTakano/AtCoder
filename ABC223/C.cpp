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

    vector<double> A(N), B(N);
    double all_time=0;
    rep(i, N){
        cin >> A.at(i) >> B.at(i);
        all_time += A.at(i)/B.at(i);
    }
    // cout << all_time << endl;

    double half_time = all_time/2, ans=0;
    rep(i, N){
        half_time -= A.at(i)/B.at(i);
        if(half_time >= 0){
            ans += A.at(i);
        }else{
            ans += (half_time+A.at(i)/B.at(i))*B.at(i);
            cout << fixed << setprecision(7) << ans << endl;
            return 0;
        }
    }


    return 0;
}