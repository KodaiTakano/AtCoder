#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll R, C;
    cin >> R >> C;

    vector<vector<ll>> A={{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                          {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
                          {1,0,1,1,1,1,1,1,1,1,1,1,1,0,1},
                          {1,0,1,0,0,0,0,0,0,0,0,0,1,0,1},
                          {1,0,1,0,1,1,1,1,1,1,1,0,1,0,1},
                          {1,0,1,0,1,0,0,0,0,0,1,0,1,0,1},
                          {1,0,1,0,1,0,1,1,1,0,1,0,1,0,1},
                          {1,0,1,0,1,0,1,0,1,0,1,0,1,0,1},
                          {1,0,1,0,1,0,1,1,1,0,1,0,1,0,1},
                          {1,0,1,0,1,0,0,0,0,0,1,0,1,0,1},
                          {1,0,1,0,1,1,1,1,1,1,1,0,1,0,1},
                          {1,0,1,0,0,0,0,0,0,0,0,0,1,0,1},
                          {1,0,1,1,1,1,1,1,1,1,1,1,1,0,1},
                          {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
                          {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};
    
    if(A.at(R-1).at(C-1)==1){
        cout << "black" << endl;
    }else{
        cout << "white" << endl;
    }

    return 0;
}