#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    ifstream in("./../input.txt");
    cin.rdbuf(in.rdbuf());

    int N;
    cin >> N;
    vector<string> s(N), t(N);
    rep(i, N) cin >> s.at(i) >> t.at(i);

    rep(i, N-1){
        rep1(j, i+1, N){
            if(s.at(i)==s.at(j) && t.at(i)==t.at(j)){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;

    return 0;
}