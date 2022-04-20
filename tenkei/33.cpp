#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define ll long long 

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    int H, W;
    cin >> H >> W;
    cout << ((H-1)/2+1)*((W-1)/2+1) << endl;

    return 0;
}