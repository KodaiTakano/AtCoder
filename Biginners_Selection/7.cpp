#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());
    int N;
    cin >> N;
    vector<int> d(N);
    rep(i, N) cin >> d.at(i);

    vector<int> a;
    // rep(i, N) cout << a.at(i) << endl;
    a.push_back(d.at(0));

    rep(i, N){
        rep(j, a.size()){
            if(d.at(i) == a.at(j)){
                break;
            }else if(j == a.size()-1){
                a.push_back(d.at(i));
            }
        }
    }

    cout << a.size() << endl;

    return 0;
}