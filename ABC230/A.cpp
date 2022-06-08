#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    int N;
    cin >> N;

    if(N<10){
        cout << "AGC00" << N << endl;
    }else if(N>41){
        cout << "AGC0" << N+1 << endl;
    }else{
        cout << "AGC0" << N << endl;
    }
    

    return 0;
}