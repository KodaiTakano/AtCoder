#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    string S;
    int K;
    cin >> S >> K;

    vector<char> s(S.size());
    rep(i, S.size()) s.at(i)=S.at(i);
    sort(all(s));

    ll count=1;
    do{
        if(count==K){
            rep(i, s.size()) { cout << s.at(i); }
            cout << endl;
        }
        count++;
    }while(next_permutation(all(s)));

    return 0;
}