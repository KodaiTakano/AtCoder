#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

ll Binaryto(ll x){
    ll r=0;
    for(ll rank = 1; x != 0; rank*=2){
        r += x%10 * rank;
        x /= 10;
    }
    return r;
}

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll A, B;
    cin >> A >> B;
    bitset<32> b1(A);
    bitset<32> b2(B);

    // cout << b1 << endl;
    // cout << b2 << endl;
    b1 = b1 xor b2;
    // cout << b1 << endl;
    cout << Binaryto(stoll(b1.to_string())) << endl;

    return 0;
}