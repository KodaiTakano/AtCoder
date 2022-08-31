#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N;
    cin >> N;

    ll i = 1;
    ll money=1;
    while(1){
        if(money>=N){
            cout << i << endl;
            return 0;
        }
        i++;
        money+=i;
    }

    return 0;
}