#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll X, A, D, N;
    cin >> X >> A >> D >> N;

    ll first = A;
    ll end = A + (N-1) * D;
    if(D>=0){
        if(X <= first){
            cout << first - X << endl;
            return 0;
        }else if(first < X && X < end){
            ll n = (X-A)/D+1;
            // if(D > 0){
                cout << min(X-(A+(n-1)*D), (A+n*D)-X) << endl;
                return 0;
            // }else if(D == 0){
            //     if(X-A>0){
            //         cout << X-A << endl;
            //     }else{
            //         cout << A-X << endl;
            //     }
            // }else{
            //     cout << min(X-(A+(n-2)*D), (A+(n-1)*D)-X) << endl;
            // }
        }else{
            cout << X - end << endl;
            return 0;
        }
    }else{
        if(X >= first){
            cout << X - first << endl;
            return 0;
        }else if(end < X && X < first){
            ll n = (X-A)/D+1;
            // cout << n << endl;
            cout << min((A+(n-1)*D)-X, X-(A+n*D)) << endl;
            return 0;
        }else{
            cout << end - X << endl;
            return 0;
        }
    }

    return 0;
}