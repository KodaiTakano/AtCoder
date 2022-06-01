#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll a, b, x;
    cin >> a >> b >> x;
    if(a==b){
        if(a%x==0){
            cout << "1" << endl;
        }else{
            cout << "0" << endl;
        }
    }else if(a==0){
        cout << b/x+1 << endl;
    }else if(b%x==0 && a%x==0){
        cout << b/x-a/x+1 << endl;
    }else if(a%x==0){
        cout << b/x-a/x+1 << endl;
    }else{
        cout << b/x-a/x << endl;
    }

    return 0;
}