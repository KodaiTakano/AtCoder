#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    int N;
    cin >> N;
    vector<string> s(N), t(N);
    rep(i, N) cin >> s.at(i) >> t.at(i);

    vector<string> a(N);

    rep(i, N){
        a.at(i) = s.at(i);
        rep(j, N){
            if(i != j && (a.at(i) == s.at(j) || a.at(i) == t.at(j))){
                a.at(i) = t.at(i);
                rep(k, N){
                    if(i != k && (a.at(i) == s.at(k) || a.at(i) == t.at(k))){
                        cout << "No" << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "Yes" << endl;

    return 0;
}