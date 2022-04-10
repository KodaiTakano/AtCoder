#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define ll long long 

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    int N;
    cin >> N;
    // cylinder = (x, c, x, c,,,)
    vector<int> cylinder;
    
    rep(i, N){
        ll a, x, c;

        cin >> a;
        // cout << a << endl;
        if(a == 1){
            cin >> x >> c;
            // rep(j, c) {
            //     cylinder.push_back(x);
            // }
            cylinder.push_back(x);
            cylinder.push_back(c);
        }else{
            cin >> c;
            // cout << "c = " << c << endl;
            ll sum = 0;
            // rep(k, c){
            //     sum += cylinder.at(0);
            //     cylinder.erase(cylinder.begin());
            // }
            while(1){
                if(cylinder.at(1) < c){
                    sum += cylinder.at(0) * cylinder.at(1);
                    c -= cylinder.at(1);
                    cylinder.erase(cylinder.begin());
                    cylinder.erase(cylinder.begin());
                }else{
                    sum += cylinder.at(0) * c;
                    cylinder.at(1) -= c;
                    break;
                }
            }
            cout << sum << endl;
        }
    }

    return 0;
}