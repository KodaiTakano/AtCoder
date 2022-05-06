#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    ifstream in("./../input.txt");
    cin.rdbuf(in.rdbuf());

    int N;
    cin >> N;
    vector<vector<ll>> path={{0}};
    ll notfindcount=0;
    rep(i, N){
        int A, B;
        cin >> A >> B;
        int size=path.size();
        rep(i, size){
            auto itr = find(all(path.at(i)), A);
            if(itr == path.at(i).end()){
                notfindcount++;
            }
            
        }
        // findが全部endだった時
        
        
        
    }

    return 0;
}