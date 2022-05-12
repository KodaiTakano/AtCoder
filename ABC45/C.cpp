#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define rep1(i, n) for (ll i = 1; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    ifstream in("./../input.txt");
    cin.rdbuf(in.rdbuf());

    string s;
    cin >> s;

    ll ans=0;
    int n = s.size()-1;
    // {0, 1, ..., n-1} の部分集合の全探索
    for (int bit = 0; bit < (1<<n); bit++) {
        vector<int> S;
        for (int i = 0; i < n; i++) {
            if (bit & (1<<i)) { // 列挙に i が含まれるか
                S.push_back(i);
            }
        }

        cout << bit << ": {";
        for (int i = 0; i < (int)S.size(); i++) {
            cout << S.at(i) << " ";
        }
        cout << "}" << endl;

        for (int i = 0; i < (int)S.size(); i++) {
            // cout << "i=" << i << endl;
            if(i > 0){
                // cout << S.at(i-1)+1 << " " << S.at(i) << endl;
                // cout << s.substr(S.at(i-1)+1, S.at(i)-S.at(i-1)) << endl;
                ans += stoll(s.substr(S.at(i-1)+1, S.at(i)-S.at(i-1)));
            }else{
                // cout << s.substr(0,S.at(i)+1) << endl;
                ans += stoll(s.substr(0,S.at(i)+1));
            }
        }
        if(S.empty()){
            ans += stoll(s);
        }else{
            // cout << s.substr(S.back()+1) << endl;
            ans += stoll(s.substr(S.back()+1));
        }
    }
    cout << ans << endl;
    
    return 0;
}