#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    int a, b, c;
    cin >> a >> b >> c;
    if((a>=b && b>=c) || (a<=b && b<=c)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}