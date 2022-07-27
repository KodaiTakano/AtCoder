#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    ifstream in("./../input.txt");
    cin.rdbuf(in.rdbuf());

    ll N;
    cin >> N;
    vector<vector<char>> S(N, vector<char>(N));
    ll count=0, x, y;
    rep(i, N) {
        rep(j, N){
            cin >> S.at(i).at(j);
            if(S.at(i).at(j)=='#'){
                if(count==0){
                    x=j;
                    y=i;
                }
                count++;
            }
        }
    }

    vector<vector<ll>> place(count);
    ll c=0;
    rep(i, N){
        rep(j, N){
            if(S.at(i).at(j)=='#'){
                place.at(c).push_back(j-x);
                place.at(c).push_back(i-y);
                c++;
            }
        }
    }

    // 順に90, 180, 270度回した配置
    vector<vector<ll>> place1(count), place2(count), place3(count);
    place1.at(0).push_back(0);
    place1.at(0).push_back(0);
    place2.at(0).push_back(0);
    place2.at(0).push_back(0);
    place3.at(0).push_back(0);
    place3.at(0).push_back(0);

    rep1(i, 1, count){
        // cout << place.at(i).at(0) << " " << place.at(i).at(1) << endl;

        // x座標
        place1.at(i).push_back(-place.at(i).at(1));
        // y座標
        place1.at(i).push_back(place.at(i).at(0));

        // x座標
        place2.at(i).push_back(-place1.at(i).at(1));
        // y座標
        place2.at(i).push_back(place1.at(i).at(0));

        // x座標
        place3.at(i).push_back(-place2.at(i).at(1));
        // y座標
        place3.at(i).push_back(place2.at(i).at(0));
    }

    // T入力
    vector<vector<char>> T(N, vector<char>(N));
    ll Tcount=0;
    rep(i, N){
        rep(j, N){
            cin >> T.at(i).at(j);
            if(T.at(i).at(j)=='#'){
                if(Tcount==0){
                    x=j;
                    y=i;
                }
                Tcount++;
            }
        }
    }
    if(count!=Tcount){
        cout << "No" << endl;
        return 0;
    }

    vector<vector<ll>> Tplace(count);
    c=0;
    rep(i, N){
        rep(j, N){
            if(T.at(i).at(j)=='#'){
                Tplace.at(c).push_back(j-x);
                Tplace.at(c).push_back(i-y);
                c++;
            }
        }
    }

    // rep(i, count){
    //     cout << Tplace.at(i).at(0) << " " << Tplace.at(i).at(1) << endl;
    // }
    // rep(i, count){
    //     cout << place.at(i).at(0) << " " << place.at(i).at(1) << endl;
    // }
    // rep(i, count){
    //     cout << place1.at(i).at(0) << " " << place1.at(i).at(1) << endl;
    // }
    // rep(i, count){
    //     cout << place2.at(i).at(0) << " " << place2.at(i).at(1) << endl;
    // }

        
    rep(i, count){
        if(i != 0) rotate(Tplace.begin(), Tplace.begin()+1, Tplace.end());
        // cout << "a" << endl;
        // Tplaceのiを0にする
        ll xshift = -Tplace.at(0).at(0);
        ll yshift = -Tplace.at(0).at(1);
        // cout << "b" << endl;
        rep(j, count){
            // cout << j << endl;
            Tplace.at(j).at(0) += xshift;
            Tplace.at(j).at(1) += yshift;
        }
        // cout << "c" << endl;
        
        cout << "Tの初期値" << endl;
        rep(i, count){
            cout << Tplace.at(i).at(0) << " " << Tplace.at(i).at(1) << endl;
        }
        
        cout << "place" << endl;
        rep(i, count){
            cout << place2.at(i).at(0) << " " << place2.at(i).at(1) << endl;
        }


        // placeとの比較
        if(equal(all(place),all(Tplace)) || equal(all(place1),all(Tplace)) || equal(all(place2),all(Tplace)) || equal(all(place3),all(Tplace))){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}