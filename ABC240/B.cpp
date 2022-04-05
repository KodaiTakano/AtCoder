#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    int N;
    cin >> N;
    vector<int> a(N);
    rep(i, N) cin >> a.at(i);

    vector<int> b;
    // cout << b.size() << endl;
    bool exist = false;
    rep(i, N){
        rep(j, b.size()){
            // cout << b.at(j) << endl;
            if(a.at(i) == b.at(j)){
                break;
            }else if(j == b.size()-1){
                exist = false;
            }
        }
        if(exist == false){
            b.push_back(a.at(i));
            exist = true;
        }
    }

    cout << b.size() << endl;

    return 0;
}