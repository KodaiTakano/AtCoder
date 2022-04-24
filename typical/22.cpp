#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    long long A, B, C;
    cin >> A >> B >> C;

    long long n = gcd(C, gcd(A,B));

    cout << A/n+B/n+C/n-3 << endl;

    return 0;
}