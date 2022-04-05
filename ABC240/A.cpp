#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    int a, b;
    cin >> a >> b;

    // cout << abs(a-b) << endl;

    if(abs(a-b) == 1 || abs(a-b) == 9){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}