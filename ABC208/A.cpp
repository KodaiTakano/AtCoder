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
    cin >> A >> B;

    if(A<=B && B<=A*6){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }


    return 0;
}