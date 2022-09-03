#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    string S;
    cin >> S;

    if(S.at(0)=='1'){
        cout << "No" << endl;
        return 0;
    }

    //　列　一本でも立っていたら1
    string v="0000000";
    rep(i, 10){
        if(i==0 || i==4){
            if(S.at(i)=='1'){
                v.at(3)='1';
            }
        }
        if(i==1 || i==7){
            if(S.at(i)=='1'){
                v.at(2)='1';
            }
        }
        if(i==2 || i==8){
            if(S.at(i)=='1'){
                v.at(4)='1';
            }
        }
        if(i==3){
            if(S.at(i)=='1'){
                v.at(1)='1';
            }
        }
        if(i==5){
            if(S.at(i)=='1'){
                v.at(5)='1';
            }
        }
        if(i==6){
            if(S.at(i)=='1'){
                v.at(0)='1';
            }
        }
        if(i==9){
            if(S.at(i)=='1'){
                v.at(6)='1';
            }
        }
    }

    if(v.find("101")!=string::npos || v.find("1001")!=string::npos || v.find("10001")!=string::npos || v.find("100001")!=string::npos || v.find("1000001")!=string::npos){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }


    return 0;
}