#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

using Graph = vector<vector<int>>;

int main (void){
    ifstream in("./../input.txt");
    cin.rdbuf(in.rdbuf());

    ll N, s_x, s_y, t_x, t_y;
    cin >> N >> s_x >> s_y >> t_x >> t_y;
    vector<vector<ll>> circle(N, vector<ll>(3));
    rep(i, N) cin >> circle.at(i).at(0) >> circle.at(i).at(1) >> circle.at(i).at(2);

    // 頂点数
    ll n=3000;
    Graph G(n);
    rep(i, N){
        for(int j = i+1; j < N; j++){
            double distance = sqrt((circle.at(i).at(0)-circle.at(j).at(0))*(circle.at(i).at(0)-circle.at(j).at(0))+(circle.at(i).at(1)-circle.at(j).at(1))*(circle.at(i).at(1)-circle.at(j).at(1)));
            if(distance <= circle.at(i).at(2)+circle.at(j).at(2)){
                G[i].push_back(j);
            }
        }
    }

    // BFS のためのデータ構造
    vector<int> dist(N, -1); // 全頂点を「未訪問」に初期化
    queue<int> que;

    int s;
    rep(i, N){
        double distance = sqrt((circle.at(i).at(0)-s_x)*(circle.at(i).at(0)-s_x)+(circle.at(i).at(1)-s_y)*(circle.at(i).at(1)-s_y));
        if(distance == circle.at(i).at(2)){
            dist[s] = 0;
            que.push(s);
            s = i;
        }
    }

    int t;
    rep(i, N){
        double distance = sqrt((circle.at(i).at(0)-t_x)*(circle.at(i).at(0)-t_x)+(circle.at(i).at(1)-t_y)*(circle.at(i).at(1)-t_y));
        if(distance == circle.at(i).at(2)){
            t = i;
        }
    }

    while (!que.empty()) {
        int v = que.front(); que.pop();
        for (auto nv : G[v]) {
            if (dist[nv] == -1) {
                dist[nv] = dist[v] + 1;
                que.push(nv);
            }
        }
    }

    // t に辿り着けるかどうか
    if (dist[t] != -1){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}