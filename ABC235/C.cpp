#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define rep1(i, n) for (ll i = 1; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N, Q;
    cin >> N >> Q;
    map<ll, vector<ll>> mp;
    int num;
    rep(i, N){
        cin >> num;
        // auto itr = mp.find(num);
        // if(itr == mp.end()){
        //     mp[num] = {i};
        // }else{
        mp[num].push_back(i);
        // }
    }

    // for(auto itr = mp.begin(); itr != mp.end(); itr++) {
    //     std::cout << "key = " << itr->first << endl; // キーを表示
    //     rep(j, itr->second.size()){
    //         cout << mp[itr->first].at(j) << " ";
    //     }
    //     cout << endl;
    // }

    ll x, k;
    rep(i, Q){
        cin >> x >> k;
        auto itr = mp.find(x);
        if(itr != mp.end()){
            if(k > mp[x].size()){
                cout << "-1" << endl;
            }else{
                cout << mp[x].at(k-1)+1 << endl;
            }
        }else{
            cout << "-1" << endl;
        }
    }

    return 0;
}