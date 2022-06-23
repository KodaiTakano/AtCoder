#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    vector<ll> H(3), W(3);
    rep(i, 3) cin >> H.at(i); 
    rep(i, 3) cin >> W.at(i); 

    // a b c
    // d e f
    // g h i
    ll count=0;
    for(int a = 1; a < H.at(0)-1; a++){
        for(int b = 1; b < H.at(0)-a; b++){
            int c = H.at(0) - a - b;
            for(int d = 1; d < W.at(0)-a; d++){
                int g = W.at(0) - a - d;
                for(int e = 1; e < min(H.at(1)-d, W.at(1)-b); e++){
                    int f = H.at(1) - d - e;
                    int h = W.at(1) - b - e;

                    int i = H.at(2)-g-h;
                    if((i > 0) && (i == W.at(2)-c-f)){
                        count++;
                        // cout << a << " " << b << " " << c << endl;
                        // cout << d << " " << e << " " << f << endl;
                        // cout << g << " " << h << " " << i << endl;
                        // cout  << endl;
                    }
                }
            }
        }
    }
    cout << count << endl;

    return 0;
}