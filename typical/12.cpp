#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define rep1(i, n) for (ll i = 1; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

struct UnionFind {
    // par[i]:iの親の番号　(例) par[3] = 2 : 3の親が2
    // rankは木の高さ
    vector<int> par, rank; 
    UnionFind(int N) : par(N) { //最初は全てが根であるとして初期化
        for(int i = 0; i < N; i++){
            par[i] = i;
            rank[i] = 0;
        }
    }

    int root(int x) { // データxが属する木の根を再帰で得る：root(x) = {xの木の根}
        if (par[x] != x) par[x] = root(par[x]);
        return par[x];
    }
    void unite(int x, int y) { // xとyの木を併合
        int rx = root(x); //xの根をrx
        int ry = root(y); //yの根をry
        if (rank[rx] > rank[ry]){
            par[ry] = rx;
        }else{
            par[rx] = par[ry];
            if(rank[rx] == rank[ry]){
                rank[ry]++;
            }
        }
    }

    bool issame(int x, int y) { // 2つのデータx, yが属する木が同じならtrueを返す
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }
};

int main (void){
    ifstream in("./../input.txt");
    cin.rdbuf(in.rdbuf());

    ll H, W, Q;
    cin >> H >> W >> Q;
    // false:白, true:赤
    vector<vector<bool>> mass(H, vector<bool>(W));
    UnionFind tree(H*W);

    rep(i, Q){
        int q;
        switch (q){
        case 1:
            ll r, c;
            cin >> r >> c;
            mass.at(r).at(c) = true;
            int num = W*(r-1)+c;
            if(r==1){
                if(c==1){
                    
                }else if(c==W){

                }else{

                }
            }else if(r==H){
                if(c==1){

                }else if(c==W){

                }else{

                }
            }else if(c==1){


            }else if(c==W){

            }else{

            }
            

            break;
        case 2:
            ll ra, ca, rb, cb;
            cin >> ra >> ca >> rb >> cb;
            if(tree.issame(W*(ra-1)+ca, W*(rb-1)+cb)) cout << "Yes" << endl;
            else cout << "No" << endl; 
            break;
        default:
            break;
        }
    }

    return 0;
}