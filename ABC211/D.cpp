#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()
using Graph = vector<vector<ll>>;
#define MOD 1000000007

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    // 頂点数と辺数
    ll N, M; 
    cin >> N >> M;

    // グラフ入力受取 (ここでは無向グラフを想定)
    Graph G(N);
    for (ll i = 0; i < M; ++i) {
        ll a, b;
        cin >> a >> b;
        G[a-1].push_back(b-1); // 頂点は0~N-1
        G[b-1].push_back(a-1); 
    }

    // BFS のためのデータ構造
    vector<ll> dist(N, -1), count(N,0); // 全頂点を「未訪問」に初期化
    queue<ll> que;

    // 初期条件 (頂点 0 を初期ノードとする)
    dist[0] = 0;
    count[0]=1;
    que.push(0); // 0 を橙色頂点にする

    // BFS 開始 (キューが空になるまで探索を行う)
    while (!que.empty()) {
        ll v = que.front(); // キューから先頭頂点を取り出す
        que.pop();

        // v から辿れる頂点をすべて調べる
        for (ll next_v : G[v]) {
            if (dist[next_v] != -1) {
                if(dist[next_v]==dist[v]+1){
                    count[next_v] += count[v]%MOD;
                    count[next_v]%=MOD;
                }
                continue; // すでに発見済みの頂点は探索しない
            }
            // 新たな白色頂点 nv について距離情報を更新してキューに追加する
            dist[next_v] = dist[v] + 1;
            count[next_v] = count[v];
            que.push(next_v);
        }
    }

    // 結果出力 (各頂点の頂点 0 からの距離を見る)
    // for (ll v = 0; v < N; ++v) cout << v+1 << ": " << dist[v] << endl;

    cout << count[N-1] << endl;

    return 0;
}