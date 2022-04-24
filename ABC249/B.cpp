#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    string S;
    cin >> S;
    string s = S;
    sort(all(s));
    s.erase(unique(all(s)), s.end());
    if(S.size() != s.size()){
        cout << "No" << endl;
        return 0;
    }
    
    bool large=false, small=false;
    rep(i, S.size()){
        char s = S.at(i);
        if(s >= 'a' && s <= 'z'){
            small = true;
        }
        if(s >= 'A' && s <= 'Z'){
            large = true;
        }
    }
    if(small==true && large==true){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}