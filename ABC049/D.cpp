#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

struct UnionFind {
    vector<int> size, parents;
    UnionFind() {}
    UnionFind(int n) {  // make n trees.
        size.resize(n, 0);
        parents.resize(n, 0);
        for (int i = 0; i < n; i++) {
            makeTree(i);
        }
    }
    void makeTree(int x) {
        parents[x] = x;  // the parent of x is x
        size[x] = 1;
    }
    bool isSame(int x, int y) { return findRoot(x) == findRoot(y); }
    bool unite(int x, int y) {
        x = findRoot(x);
        y = findRoot(y);
        if (x == y) return false;
        if (size[x] > size[y]) {
            parents[y] = x;
            size[x] += size[y];
        } else {
            parents[x] = y;
            size[y] += size[x];
        }
        return true;
    }
    int findRoot(int x) {
        if (x != parents[x]) {
            parents[x] = findRoot(parents[x]);
        }
        return parents[x];
    }
    int treeSize(int x) { return size[findRoot(x)]; }
};

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N, K, L;
    cin >> N >> K >> L;
    UnionFind road(N);
    rep(i, K){
        ll p, q;
        cin >> p >> q;
        road.unite(p-1, q-1);
    }
    // cout << road.isSame(1,2) << endl;
    UnionFind rail(N);
    rep(i, L){
        ll r, s;
        cin >> r >> s;
        rail.unite(r-1, s-1);   
    }
    // cout << rail.isSame(0,1) << endl;
    vector<ll> ans(N, 0);
    rep(i, N){
        if(road.treeSize(i)>1){
            ans.at(i)=1;
        }
        if(rail.treeSize(i)>1){
            ans.at(i)=1;
        }
    }
    rep(i, N){
        rep1(j, i+1, N){
            if(road.isSame(i,j)==true&&rail.isSame(i,j)==true){
                ans.at(i)=2;
                ans.at(j)=2;
            }
        }
    }
    rep(i, N){
        cout << ans.at(i) << " ";
    }

    return 0;
}