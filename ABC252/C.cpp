#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define rep1(i, n) for (ll i = 1; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    ifstream in("./../input.txt");
    cin.rdbuf(in.rdbuf());

    ll N;
    cin >> N;
    vector<string> S(N);
    rep(i, N){
        cin >> S.at(i);
    } 
    
    vector<string> S_T(10);
    rep(i, N){
        rep(j, 10){
            S_T.at(j).push_back(S.at(i).at(j));
        }
    }


    // time[0]は0を揃えるために必要な時間
    vector<ll> time(10);
    vector<vector<ll>> count(10, vector<ll>(N));
    // map[0]は0が何列目で一番最後に出てきたか
    map<ll, ll> last;

    ll n;
    rep(i, 10){
        // cout << S_T.at(i) << endl;
        // count[x]はi列目にxが何回出てきたか
        // vector<ll> count(10);
        rep(j, N){
            n = int(S_T.at(i).at(j)-'0');
            count.at(i).at(n)++;
            // if(count.at(i).at(n) != 1){
            //     // cout << n << endl;
            //     time.at(n) += 10;
            // }
            last[n] = i;
        }
        // cout  << endl;
    }
    
    rep(i, 10){

    }
    // rep(i, 10){
    //     cout << time.at(i) << endl;
    // }
    
    for(auto itr = last.begin(); itr != last.end(); itr++) {
        time.at(itr->first) += itr->second;
    }
    rep(i, 10){
        cout << time.at(i) << endl;
    }
    // cout << *min_element(all(time)) << endl;
    


    return 0;
}