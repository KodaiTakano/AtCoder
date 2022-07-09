#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    double a, b, d;
    cin >> a >> b >> d;

    double rad = d/180*M_PI;
    
    cout << fixed << setprecision(7) << a*cos(rad)-b*sin(rad) << " " << a*sin(rad)+b*cos(rad) << endl;

    return 0;
}