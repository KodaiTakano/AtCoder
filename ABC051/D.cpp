#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()
#define INF 10000000

void warshall_floyd(vector<vector<ll>> &d, ll N, vector<vector<ll>> &prev) {
  for (int k = 0; k < N; k++){       // 経由する頂点
    for (int i = 0; i < N; i++) {    // 始点
      for (int j = 0; j < N; j++) {  // 終点
        if (d[i][k] + d[k][j] < d[i][j]) {
            d[i][j] = d[i][k] + d[k][j];
            prev[i][j] = prev[k][j];
        }
      }
    }
  }
}

vector<ll> get_path(const vector<vector<long long>> &prev, int s, int t) {
    vector<ll> path;
    for (int cur = t; cur != s; cur = prev[s][cur]) {
        path.push_back(cur);
    }
    path.push_back(s);
    reverse(path.begin(), path.end());
    return path;
}

int main (void){
    ifstream in("./../input.txt");
    cin.rdbuf(in.rdbuf());
    ll N, M;
    cin >> N >> M;
    vector<vector<ll>> d(N, vector<ll>(N, INF)), prev(N, vector<ll>(N));
    rep(i, M){
        // cout << "a" << endl;
        int a, b, c;
        cin >> a >> b >> c;
        d.at(a-1).at(b-1) = c;
        d.at(b-1).at(a-1) = c;
    }
    rep(i, N){
        rep(j, N){
            cout << d.at(i).at(j) << " ";
        }
        cout << endl;
    }

    warshall_floyd(d, N, prev);

    // vector<ll> ans(N);
    // rep(i, N){
    //     ans.at(i)=0;
    // }
    vector<ll> all_path, path;
    for (int i = 0; i < N-1; i++) {
      cout << "b" << endl;
      for (int j = i+1; j < N; j++) {
        cout << "a" << endl;
        path=get_path(prev, i, j);
        all_path.insert(all_path.end(), path.begin(), path.end());
      }
    }
    sort(all(all_path));
    all_path.erase(unique(all(all_path)), all_path.end());

    rep(i, all_path.size()){
        cout << all_path.at(i) << endl;
    }
    
    // ll ans=0;
    // rep(i, N){
    //     if(all_path.at(i)!=i){
    //         ans++;
    //     }
    // }

    // rep(i, N){
    //     rep(j, N){
    //         cout << d.at(i).at(j) << " ";
    //     }
    //     cout << endl;
    // }






    return 0;
}