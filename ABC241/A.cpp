#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main (void){

    vector<int> a(10);
    rep(i, 10) cin >> a.at(i);

    cout << a.at(a.at(a.at(0))) << endl;


    return 0;
}