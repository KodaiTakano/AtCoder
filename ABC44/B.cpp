#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    string w;
    cin >> w;

    map<char, int> count;
    rep(i, w.size()){
        count[w.at(i)]++;
    }

    for(auto itr = count.begin(); itr != count.end(); ++itr) {
        if(itr->second%2 != 0){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    return 0;
}