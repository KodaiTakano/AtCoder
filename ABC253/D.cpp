#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N, A, B;
    cin >> N >> A >> B;
    ll sumA, sumB, sumAB;
    sumA = (N/A)*(A+(N/A)*A)/2;
    sumB = (N/B)*(B+(N/B)*B)/2;
    sumAB = (N/(A*B))*((A*B)+(N/(A*B))*(A*B))/2;
    // cout << sumAB << endl;
    if(A!=B){
        cout << N*(N+1)/2-sumA-sumB+sumAB << endl;
    }
    return 0;
}