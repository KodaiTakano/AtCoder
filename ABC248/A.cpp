#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    string S;
    cin >> S;

    int sum = 0;
    rep(i, 9){
        sum+=int(S.at(i)-'0');
    }
    cout << 45 - sum << endl;

    return 0;
}