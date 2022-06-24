#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    ifstream in("./../input.txt");
    cin.rdbuf(in.rdbuf());

    ll N;
    cin >> N;
    vector<vector<ll>> ans(2);
    ll L, R;
    cin >> L >> R;
    ans.at(0).push_back(L);
    ans.at(1).push_back(R);
    rep1(i, N){
        cin >> L >> R;
         
        int L0 = lower_bound(all(ans.at(0)), L) - ans.at(0).begin(); 
        int R0 = lower_bound(all(ans.at(0)), R) - ans.at(0).begin();
        int L1 = lower_bound(all(ans.at(1)), L) - ans.at(1).begin();
        int R1 = lower_bound(all(ans.at(1)), R) - ans.at(1).begin();
        cout << L0 << endl;

        if(ans.at(0).at(L0)  ){
            if(R0 = R1+1){

            }
            
            
        }

        ans.at(0).push_back(L);
        ans.at(1).push_back(R);
    }
    
    rep(i, 2){
        if(i == 0){
            cout << 'L' << endl;
        }else{
            cout << 'R' << endl;
        }
        rep(j, ans.at(0).size()){
            cout << ans.at(i).at(j) << endl;
        }
    }

    return 0;
}