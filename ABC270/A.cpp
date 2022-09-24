#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll A, B;
    cin >> A >>B;

    string x="000";

    if(A==1 || B==1){
       x.at(0)='1';
    }
    if(A==2 || B==2){
        x.at(1)='1';
    }
    if(A==3 || B==3){
        x.at(0)='1';
        x.at(1)='1';
    }
    if(A==4 || B==4){
        x.at(2)='1';
    }
    if(A==5 || B==5){
        x.at(0)='1';
        x.at(2)='1';
    }
    if(A==6 || B==6){
        x.at(1)='1';
        x.at(2)='1';
    }
    if(A==7 || B==7){
        x.at(0)='1';
        x.at(1)='1';
        x.at(2)='1';
    }

    ll ans=0;
    rep(i, 3){
        if(x.at(i)=='1') ans+=pow(2, i);
    }
    cout << ans << endl;

    return 0;
}