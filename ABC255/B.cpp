#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    double N, K;
    cin >> N >> K;
    vector<double> A(K);
    rep(i, K) cin >> A.at(i);
    vector<vector<double>> xy(N, vector<double>(2));
    rep(i, N) cin >> xy.at(i).at(0) >> xy.at(i).at(1);

    vector<vector<double>> distance_ary(K, vector<double>(N));
    // mp[x]=y Axばんめの座標に灯がいくための最小の値；
    map<double, double> mp;
    rep(i, K){
        rep(j, N){
            double x = xy.at(A.at(i)-1).at(0)-xy.at(j).at(0);
            double y = xy.at(A.at(i)-1).at(1)-xy.at(j).at(1);            
            double distance = sqrt(x*x+y*y);
            auto itr = mp.find(j);
            if(itr == mp.end()){
                mp[j] = distance;
            }else if(mp[j] > distance){
                mp[j] = distance;
            }
        }
    }

    double ans = 0;
    for(auto itr = mp.begin(); itr != mp.end(); itr++) {
        if(ans < itr->second){
            ans = itr->second;
        }
    }
    cout <<  fixed << setprecision(7) <<ans << endl;
    
    return 0;
}