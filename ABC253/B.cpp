#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    int H, W;
    cin >> H >> W;
    vector<string> S(H);

    int x, y;
    bool o=false;
    rep(i, H){
        cin >> S.at(i);
        rep(j, W){
            if(S.at(i).at(j)=='o' && o==false){
                x = i;
                y = j;
                o = true;
            }else if(S.at(i).at(j)=='o'){
                cout << abs(x-i)+abs(y-j) << endl;
                return 0;
            }
        }
    }

    return 0;
}