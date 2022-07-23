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
    vector<vector<char>> A(N, vector<char>(N));
    rep(i, N){
        string s;
        cin >> s;
        rep(j, N){
            A.at(i).at(j) = s.at(j);
        }
    }
    rep(i, N){
        rep(j, N){
            if(A.at(i).at(j)=='W'){
                if(A.at(j).at(i)!='L'){
                    cout << "incorrect" << endl;
                    return 0;
                }
            }
            if(A.at(i).at(j)=='L'){
                if(A.at(j).at(i)!='W'){
                    cout << "incorrect" << endl;
                    return 0;
                }
            }
            if(A.at(i).at(j)=='D'){
                if(A.at(j).at(i)!='D'){
                    cout << "incorrect" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "correct" << endl;

    return 0;
}