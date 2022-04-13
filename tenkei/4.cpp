#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    int H, W;
    cin >> H >> W;
    vector<vector<int>> A(H, vector<int>(W));

    rep(i, H){
        rep(j, W){
            cin >> A.at(i).at(j); 
        }
    }

    vector<int> row(H);
    rep(i, H){
        rep(j, W){
            row.at(i) += A.at(i).at(j);
        }
    }

    vector<int> colum(W);
    rep(j, W){
        rep(i, H){
            colum.at(j) += A.at(i).at(j);
        }
    }

    vector<vector<int>> B(H, vector<int>(W));
    rep(i, H){
        rep(j, W){
            cout << row.at(i) + colum.at(j) - A.at(i).at(j) << " ";
        }
        cout << endl;
    }

    return 0;
}