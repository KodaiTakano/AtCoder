#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

using Graph = vector<vector<ll>>;

void dfs(const Graph &G, int v, ll &ans, vector<vector<ll>> &path){
    // cout << "a" << endl;

    // v から行ける各頂点 next_v について
    for (auto next_v : G[v]) {
        if (G.at(v).empty() ) continue; // G[v]が空配列ならスルー
        path.at(v).push_back(next_v);
        cout << v << " " << next_v << endl;
        ans++;
        dfs(G, next_v, ans, path); // 再帰的に探索
    }
}

int main (void){
    ifstream in("./../input.txt");
    cin.rdbuf(in.rdbuf());

    // 頂点数と辺数
    ll N, M; 
    cin >> N >> M;

    // グラフ入力受取 (ここでは無向グラフを想定)
    Graph G(N);
    vector<vector<ll>> path(N);
    for (ll i = 0; i < M; ++i) {
        ll a, b;
        cin >> a >> b;
        G[a-1].push_back(b-1); // 頂点は0~N-1
    }

    // 深さ優先探索
    vector<bool> seen;
    ll ans=N;
    seen.assign(N,false);
    dfs(G, 0, ans, path);
 
    cout << ans << endl;


    return 0;
}