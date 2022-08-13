#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    string s;
    cin >> s;

    ll ans=0;
    for(ll i = s.find('a'); i > 0; i--){
        char temp = s.at(i);
        s.at(i) = s.at(i-1);
        s.at(i-1) = s.at(i);
        ans++;
    }
    for(ll i = s.find('t'); i > 1; i--){
        char temp = s.at(i);
        s.at(i) = s.at(i-1);
        s.at(i-1) = s.at(i);
        ans++;
    }
    for(ll i = s.find('c'); i > 2; i--){
        char temp = s.at(i);
        s.at(i) = s.at(i-1);
        s.at(i-1) = s.at(i);
        ans++;
    }
    for(ll i = s.find('o'); i > 3; i--){
        char temp = s.at(i);
        s.at(i) = s.at(i-1);
        s.at(i-1) = s.at(i);
        ans++;
    }
    for(ll i = s.find('d'); i > 4; i--){
        char temp = s.at(i);
        s.at(i) = s.at(i-1);
        s.at(i-1) = s.at(i);
        ans++;
    }
    for(ll i = s.find('e'); i > 5; i--){
        char temp = s.at(i);
        s.at(i) = s.at(i-1);
        s.at(i-1) = s.at(i);
        ans++;
    }
    cout << ans << endl;

    return 0;
}