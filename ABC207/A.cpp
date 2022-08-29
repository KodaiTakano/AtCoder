#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    vector<ll> A(3);
    cin >> A.at(0) >> A.at(1) >> A.at(2);

    sort(all(A));
    cout << A.at(1)+A.at(2) << endl;

    

    return 0;
}