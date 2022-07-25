#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    string s1, s2, s3, T;
    cin >> s1 >> s2 >> s3 >> T;

    string s;    
    rep(i, T.size()){
        switch (int(T.at(i)-'0')){
        case 1:
            s+=s1;
            break;
        case 2:
            s+=s2;
            break;
        case 3:
            s+=s3;
            break;
        
        default:
            break;
        }
    }
    cout << s << endl;
    return 0;
}