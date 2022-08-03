#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    string s;
    cin >> s;

    cout << s.substr(0, 5) << " " << s.substr(6, 7) << " " << s.substr(14, 5)  << endl;    

    return 0;
}