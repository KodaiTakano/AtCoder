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
    int a, b;
    cin >> S >> a >> b;

    char temp = S.at(a-1);
    S.at(a-1) = S.at(b-1);
    S.at(b-1) = temp;

    cout << S << endl;

    return 0;
}