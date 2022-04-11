#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    vector<int> x(3), y(3);

    rep(i, 3) cin >> x.at(i) >> y.at(i);

    if(x.at(0) == x.at(1)){
        cout << x.at(2) << " ";
    }else if(x.at(0) == x.at(2)){
        cout << x.at(1) << " ";
    }else{
        cout << x.at(0) << " ";
    }

    if(y.at(0) == y.at(1)){
        cout << y.at(2) << endl;
    }else if(y.at(0) == y.at(2)){
        cout << y.at(1) << endl;
    }else{
        cout << y.at(0) << endl;
    }
    

    return 0;
}