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

    vector<char> ans;
    while(N>0){
        if(N%2==0){
            N /= 2;
            ans.push_back('B');
        }else{
            N--;
            ans.push_back('A');
        }
    }

    reverse(all(ans));
    rep(i, ans.size()){
        cout << ans.at(i);
    }

    return 0;
}