#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll H, W;
    cin >> H >> W;
    vector<vector<char>> G(H, vector<char>(W));
    rep(i, H) rep(j, W) cin >> G.at(i).at(j);

    
    vector<vector<ll>> a(H, vector<ll>(W, 0));
    ll i=0, j=0;
    while(1){
        // 同じところを通っていれば
        if(a.at(i).at(j)==1){
            cout << "-1" << endl;
            return 0;
        }
        a.at(i).at(j)=1;
        
        if(G.at(i).at(j)=='U'){
            if(i==0){
                cout << i+1 << " " << j+1 << endl;
                return 0;
            }
            i--;
        }
        if(G.at(i).at(j)=='D'){
            if(i==H-1){
                cout << i+1 << " " << j+1 << endl;
                return 0;
            }
            i++;
        }
        if(G.at(i).at(j)=='L'){
            if(j==0){
                cout << i+1 << " " << j+1 << endl;
                return 0;
            }
            j--;
        }
        if(G.at(i).at(j)=='R'){
            if(j==W-1){
                cout << i+1 << " " << j+1 << endl;
                return 0;
            }
            j++;
        } 
    }    

    return 0;
}