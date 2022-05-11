#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define rep1(i, n) for (ll i = 1; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    string S;
    cin >> S;
    ll N = S.size();

    // abef:Sの前に連続しているaの数
    // asum = aft-abef
    ll abef=0, aaft=0, anum;
    rep(i, N){
        if(S.at(i)=='a'){
            // cout << i << endl;
            abef++;
        }else{
            break;
        }
    }
    rep(i, N){
        if(S.at(N-i-1)=='a'){
            // cout << i << endl;
            aaft++;
        }else{
            break;
        }
    }

    // cout << aaft << " " << abef << endl;
    anum = aaft-abef;
    string astring="";
    rep(i, anum){
        astring += 'a';
    }
    // cout << astring << endl;

    S = astring + S;
    N = S.size();
    // cout << S << endl;
    rep(i, N/2){
        // cout << i << " " << S.at(i) << " " << S.at(N-i-1)  << endl;
        if(S.at(i) != S.at(N-i-1)){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    return 0;
}