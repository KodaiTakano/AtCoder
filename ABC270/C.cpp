#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()
using Graph = vector<vector<int>>;

void dfs(const Graph &G, vector<bool> &seen, int v, vector<ll> &path, ll& Y, ll &count){
    seen[v] = true; // v を訪問済にする

    // v から行ける各頂点 next_v について
    for (auto next_v : G[v]) {
        if (seen[next_v]) continue; // next_v が探索済だったらスルー
        count++;
        path.push_back(next_v);
        if(next_v==Y-1){
            // cout << "ans" << endl;
            rep(i, path.size()){
                cout << path.at(i)+1 << " ";
            }
            return;
        }

        // cout << next_v << endl;
        
        dfs(G, seen, next_v, path, Y, count); // 再帰的に探索
        cout << count << endl;
        // rep(i, path.size()){
        //     cout << path.at(i) << " ";
        // }
        // cout << endl;
        // auto itr=find(all(path), v);
        rep(i, count){
            path.pop_back();
        }
        count=0;
    }
}

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N, X, Y, count=0;
    cin >> N >> X >> Y;
    Graph G(N);
    rep(i, N-1){
        ll a, b;
        cin >> a >> b;
        G[a-1].push_back(b-1);
        G[b-1].push_back(a-1);
    }
    // 深さ優先探索
    vector<bool> seen;
    vector<ll> path={X-1};
    seen.assign(N,false);
    dfs(G, seen, X-1, path, Y, count);

    return 0;
}