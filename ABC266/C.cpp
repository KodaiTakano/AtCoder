#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()


double gaiseki(ll ax, ll ay, ll bx, ll by){
    return ax * by - ay * bx;
}

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    vector<pair<ll, ll>> v(4);
    map<ll, ll> mp;
    rep(i, 4) {
        ll x, y;
        cin >> x >> y;
        v[i].first=x;
        v[i].second=y;
        mp[x]++;
        mp[y]++;
    }

    // cout << gaiseki(v[0].first-v[1].first, v[0].second-v[1].second, v[2].first-v[1].first, v[2].second-v[1].second) << endl;

    if(gaiseki(v[2].first-v[1].first, v[2].second-v[1].second, v[0].first-v[1].first, v[0].second-v[1].second)<0){
        cout << "No" << endl;
        return 0;
    }
    if(gaiseki(v[3].first-v[2].first, v[3].second-v[2].second, v[1].first-v[2].first, v[1].second-v[2].second)<0){
        cout << "No" << endl;
        return 0;
    }
    if(gaiseki(v[0].first-v[3].first, v[0].second-v[3].second, v[2].first-v[3].first, v[2].second-v[3].second)<0){
        cout << "No" << endl;
        return 0;
    }
    if(gaiseki(v[1].first-v[0].first, v[1].second-v[0].second, v[3].first-v[0].first, v[3].second-v[0].second)<0){
        cout << "No" << endl;
        return 0;
    }
    

    cout << "Yes" << endl;


    return 0;
}