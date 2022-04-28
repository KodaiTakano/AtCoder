#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    string s;
    cin >> s;

    // とりあえず|s|<100バージョン
    map<char, int> count;
    rep(i, s.size()-1){
        count.clear();
        // cout << "i=" << i << endl;
        for(int j = i; j < s.size(); j++){
            count[s.at(j)]++;
            // cout << j << endl;
            // cout << count['a'] << endl;
            if(i!=j && count[s.at(j)] > (j-i+1)/2){
                cout << i+1 << " " << j+1 << endl;
                return 0;
            }
        }
    }
    cout << "-1 -1" << endl;

    return 0;
}