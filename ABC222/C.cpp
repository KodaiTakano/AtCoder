#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N, M;
    cin >> N >> M;
    vector<vector<char>> A(2*N, vector<char>(M));
    vector<ll> point(2*N,0), rank(2*N);
    rep(i, 2*N){
        rep(j, M){
            cin >> A.at(i).at(j);
        }
    }

    rep(i, N){
        // 2*iの人が勝つ場合
        if((A.at(2*i).at(0)=='G'&&A.at(2*i+1).at(0)=='C')||(A.at(2*i).at(0)=='C'&&A.at(2*i+1).at(0)=='P')||(A.at(2*i).at(0)=='P'&&A.at(2*i+1).at(0)=='G')){
            point.at(2*i)++;
        }
        // 2*i+1の人が勝つ場合
        if((A.at(2*i).at(0)=='G'&&A.at(2*i+1).at(0)=='P')||(A.at(2*i).at(0)=='C'&&A.at(2*i+1).at(0)=='G')||(A.at(2*i).at(0)=='P'&&A.at(2*i+1).at(0)=='C')){
            point.at(2*i+1)++;
        }
    }
    rep(i, 2*N){
        rank.at(i) = 10000*(100-point.at(i))+i;
    }
    sort(all(rank));


    // rep(i, 2*N){
    //     cout << "i:" << i <<  " point:" << point.at(i) << endl;
    // }
    // rep(i, 2*N){
    //     cout << "rank:" << rank.at(i)%10000 << endl;
    // }


    rep1(i, 1, M){
        rep(j, N){
            ll first_rank = rank.at(2*j)%10000, second_rank=rank.at(2*j+1)%10000;
            // cout << first_rank << second_rank << endl;
            // 2*iの人が勝つ場合
            if((A.at(first_rank).at(i)=='G'&&A.at(second_rank).at(i)=='C')||(A.at(first_rank).at(i)=='C'&&A.at(second_rank).at(i)=='P')||(A.at(first_rank).at(i)=='P'&&A.at(second_rank).at(i)=='G')){
                point.at(first_rank)++;
            }
            // 2*i+1の人が勝つ場合
            if((A.at(first_rank).at(i)=='G'&&A.at(second_rank).at(i)=='P')||(A.at(first_rank).at(i)=='C'&&A.at(second_rank).at(i)=='G')||(A.at(first_rank).at(i)=='P'&&A.at(second_rank).at(i)=='C')){
                point.at(second_rank)++;
            }
        }
        rep(i, 2*N){
            rank.at(i) = 10000*(100-point.at(i))+i;
        }
        sort(all(rank));
    }
    rep(i, 2*N){
        cout << rank.at(i)%10000+1 << endl;
    }

    return 0;
}