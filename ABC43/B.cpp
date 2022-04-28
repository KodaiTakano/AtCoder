#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    string s, ans;
    cin >> s;

    rep(i, s.size()){
        switch (s.at(i)){
        case '0':
            ans.push_back('0');
            break;
        case '1':
            ans.push_back('1');
            break;
        case 'B':
            if(!ans.empty()) ans.pop_back();
            break;
        default:
            cout << "default" << endl;
            break;
        }
    }
    cout << ans << endl;

    return 0;
}