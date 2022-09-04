#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll A, B, C;
    cin >> A >> B >> C;

    if(C%2==0){
        ll a=abs(A), b=abs(B);
        if(a==b){
            cout << "=" << endl;
        }else if(a<b){
            cout << "<" << endl;
        }else{
            cout << ">" << endl;
        }
    }else{
        if(A==B){
            cout << "=" << endl;
        }else if(A<B){
            cout << "<" << endl;
        }else{
            cout << ">" << endl;
        }
    }

    return 0;
}