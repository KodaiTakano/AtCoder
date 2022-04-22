#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

// b進数の整数Nbをa進数に変換したNaを返す。
ll change(ll Nb, ll b, ll a){
    ll x, Na=0, rank=0;
    while(Nb > 0){
        x = Nb % a;
        Na += (ll)x*pow(b, rank);
        Nb /= a;
        rank++;
    }
    return Na;
}

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N8, K;
    cin >> N8 >> K;

    ll N10, N9, rank;
    rep(i, K){
        N10 = change(N8, 8, 10);
        N9 = change(N10, 10, 9);
        N8 = 0;
        rank = 0;
        while(N9 > 0){
            if(N9 % 10 == 8){
                N8 += 5*pow(10, rank);
            }else{
                N8 += N9%10*pow(10, rank);
            }
            N9 /= 10;
            rank++; 
        }
    }
    cout << N8 << endl;

    return 0;
}