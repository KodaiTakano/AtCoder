#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll A, B;
    cin >> A >> B;

    // ll ans = A/gcd(A,B)*B;

    if(log10(A)-log10(gcd(A,B))+log10(B) > 18){
        cout << "Large" << endl;
    }else{
        cout << A/gcd(A, B)*B << endl;
    }

    return 0;
}