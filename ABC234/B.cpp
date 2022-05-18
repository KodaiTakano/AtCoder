#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define rep1(i, n) for (ll i = 1; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N;
    cin >> N;
    vector<ll> x(N), y(N);
    rep(i, N) cin >> x.at(i) >> y.at(i);
    
    double max=0;
    rep(i, N){
        for(int j = i; j < N; j++){
            double dis = sqrt((x.at(i)-x.at(j))*(x.at(i)-x.at(j))+(y.at(i)-y.at(j))*(y.at(i)-y.at(j)));
            if(dis > max){
                max = dis;
            }
        }
    }
    cout << fixed << setprecision(9) << max << endl;

    return 0;
}