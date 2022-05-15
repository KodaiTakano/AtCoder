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

    cout << (int(S.at(0)-'0')+int(S.at(1)-'0')+int(S.at(2)-'0'))*100
            +(int(S.at(0)-'0')+int(S.at(1)-'0')+int(S.at(2)-'0'))*10
            +(int(S.at(0)-'0')+int(S.at(1)-'0')+int(S.at(2)-'0')) << endl;
    return 0;
}