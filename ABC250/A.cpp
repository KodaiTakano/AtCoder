#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 1; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    int H, W, R, C;
    cin >> H >> W >> R >> C;

    int count=0;
    rep(i, H+1){
        rep(j, W+1){
            if(abs(i-R)+abs(j-C)==1){
                count++;
            }
        }
    }
    cout << count << endl;

    return 0;
}