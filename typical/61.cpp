#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    int Q;
    cin >> Q;
    int t, x;
    vector<int> v;
    rep(i, Q){
        cin >> t >> x;
        switch (t)
        {
        case 1:
            v.insert(v.begin(), x);
            break;
        case 2:
            v.push_back(x);
            break;
        case 3:
            cout << v.at(x-1) << endl;
            break;
        default:
            cout << "default" << endl;
            break;
        }
    }

    return 0;
}