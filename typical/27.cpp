#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    int N;
    cin >> N;
    map<string, bool> S;
    string s;
    rep(i, N){
        cin >> s;
        if(S[s] == 0){
            S[s] = 1;
            cout << i+1 << endl;
        }
    }

    return 0;
}