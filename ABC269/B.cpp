#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    vector<string> S(10);
    bool start=false;
    ll A, C, D;
    rep(i, 10){
        cin >> S.at(i);
        if(start==true){
            // #がない場合
            if(S.at(i).find('#')==string::npos){
                cout << A << " " << i << endl;
                cout << C << " " << D << endl;
                return 0;
            }
            // #があるが最終行の場合
            if(i==9){
                cout << A << " " << 10 << endl;
                cout << C << " " << D << endl;
                return 0;
            }
        }
        if(start==false){
            size_t found = S.at(i).find_first_of('#');
            // 見つかった場合
            if(found!=string::npos){
                start = true;
                A=i+1;
                C=found+1;
                D=S.at(i).find_last_of('#')+1;
            }
        }
    }
    cout << "10 10" << endl;
    cout << C << " " <<  D << endl;

    return 0;
}