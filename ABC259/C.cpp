#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    string S, T;
    cin >> S >> T;
    vector<char> str;
    vector<ll> str_num;
    char before_s = S.at(0);
    ll string_num = 1;
    rep1(i, S.size()){
        char s = S.at(i);
        if(before_s == s){
            string_num++;
        }else{
            str.push_back(before_s);
            str_num.push_back(string_num);
            before_s = s;
            string_num = 1;
        }
    }
    str.push_back(before_s);
    str_num.push_back(string_num);

    vector<char> T_str;
    vector<ll> T_str_num;
    before_s = T.at(0);
    string_num = 1;
    rep1(i, T.size()){
        char s = T.at(i);
        if(before_s == s){
            string_num++;
        }else{
            T_str.push_back(before_s);
            T_str_num.push_back(string_num);
            before_s = s;
            string_num = 1;
        }
    }
    T_str.push_back(before_s);
    T_str_num.push_back(string_num);
    
    // rep(i, str.size()){
    //     cout << T_str.at(i) << " " << T_str_num.at(i) << endl;
    // }

    if(str_num.size() != T_str_num.size()){
        cout << "No" << endl;
        return 0;
    }
    rep(i, str.size()){
        if(str.at(i) != T_str.at(i)){
            cout << "No" << endl;
            return 0;
        }
        if(str_num.at(i)==1){
            if(T_str_num.at(i)!=1){
                cout << "No" << endl;
                return 0;
            }
        }
        if(str_num.at(i) > T_str_num.at(i)){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    return 0;
}