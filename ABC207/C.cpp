#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N;
    cin >> N;
    vector<ll> t(N), l(N), r(N);
    rep(i, N) cin >> t.at(i) >> l.at(i) >> r.at(i);

    ll ans=0;
    rep(i, N-1){
        rep1(j, i+1, N){
            switch (t.at(i)){
                case 1:
                    switch (t.at(j)){
                        case 1:
                            if(l.at(i)>r.at(j) || r.at(i)<l.at(j)) ans--;
                            break;
                        case 2:
                            if(l.at(i)>=r.at(j) || r.at(i)<l.at(j)) ans--;
                            break;
                        case 3:
                            if(l.at(i)>r.at(j) || r.at(i)<=l.at(j)) ans--;
                            break;
                        case 4:
                            if(l.at(i)>=r.at(j) || r.at(i)<=l.at(j)) ans--;
                            break;
                        default:
                            break;
                    }
                    ans++;
                    break;
                case 2:
                    switch (t.at(j)){
                        case 1:
                            if(l.at(i)>r.at(j) || r.at(i)<=l.at(j)) ans--;
                            break;
                        case 2:
                            if(l.at(i)>=r.at(j) || r.at(i)<=l.at(j)) ans--;
                            break;
                        case 3:
                            if(l.at(i)>r.at(j) || r.at(i)<=l.at(j)) ans--;
                            break;
                        case 4:
                            if(l.at(i)>=r.at(j) || r.at(i)<=l.at(j)) ans--;
                            break;
                        default:
                            break;
                    }
                    ans++;
                    break;
                case 3:
                    switch (t.at(j)){
                        case 1:
                            if(l.at(i)>=r.at(j) || r.at(i)<l.at(j)) ans--;
                            break;
                        case 2:
                            if(l.at(i)>=r.at(j) || r.at(i)<l.at(j)) ans--;
                            break;
                        case 3:
                            if(l.at(i)>=r.at(j) || r.at(i)<=l.at(j)) ans--;
                            break;
                        case 4:
                            if(l.at(i)>=r.at(j) || r.at(i)<=l.at(j)) ans--;
                            break;
                        default:
                            break;
                    }
                    ans++;
                    break;
                case 4:
                    switch (t.at(j)){
                        case 1:
                            if(l.at(i)>=r.at(j) || r.at(i)<=l.at(j)) ans--;
                            break;
                        case 2:
                            if(l.at(i)>=r.at(j) || r.at(i)<=l.at(j)) ans--;
                            break;
                        case 3:
                            if(l.at(i)>=r.at(j) || r.at(i)<=l.at(j)) ans--;
                            break;
                        case 4:
                            if(l.at(i)>=r.at(j) || r.at(i)<=l.at(j)) ans--;
                            break;
                        default:
                            break;
                    }
                    ans++;
                    break;                
                default:
                    break;
            }
        }
    }
    cout << ans << endl;

    return 0;
}