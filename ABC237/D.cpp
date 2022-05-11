#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define rep1(i, n) for (ll i = 1; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    ifstream in("./../input.txt");
    cin.rdbuf(in.rdbuf());

    int N;
    string S;
    cin >> N >> S;
    
    // Lを通ったか(Rを通ればfalseに)
    bool L = false;
    ll Lcount=0;
    vector<ll> Lvec; 
    cout << "0 ";
    rep(i, N){
        if(S.at(i)=='L'){
            L = true;
            Lcount++;
            Lvec.push_back(i);
        }
        if(S.at(i)=='R'){
            if(L==true){
                for(int j = Lvec.size()-1; j > 0; j--){
                    cout << Lvec.at(j) << " ";
                }
                cout << i+1 << " " << endl;
                L = false;
                Lcount = 0;
                Lvec.clear();
            }else{
                cout << i+1 << " ";
            }
        }
        if(Lcount > 0 && i == N-1){
            for(int j = Lvec.size()-1; j > 0; j--){
                cout << Lvec.at(j) << " ";
            }
        }
    }

    return 0;
}