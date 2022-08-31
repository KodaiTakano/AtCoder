#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    double N;
    cin >> N;

    if(N*1.08<206){
        cout << "Yay!" << endl;
    }else if(N*1.08>207){
        cout << ":(" << endl;
    }else{
        cout << "so-so" << endl;
    }


    return 0;
}