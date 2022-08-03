#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll sx, sy, tx, ty;
    cin >> sx >> sy >> tx >> ty;

    ll x = tx-sx;
    ll y = ty-sy;
    // tへ上
    rep(i, y){
        cout << 'U';
    }
    // tへ右
    rep(i, x){
        cout << 'R';
    }
    // sへ下
    rep(i, y){
        cout << 'D';
    }
    // sへ左
    rep(i, x){
        cout << 'L';
    }
    
    cout << 'L';
    // tへ上
    rep(i, y+1){
        cout << 'U';
    }
    // tへ右
    rep(i, x+1){
        cout << 'R';
    }
    cout << 'D';

    cout << 'R';
    // sへ下
    rep(i, y+1){
        cout << 'D';
    }
    // sへ左
    rep(i, x+1){
        cout << 'L';
    }
    cout << 'U' << endl;


    return 0;
}