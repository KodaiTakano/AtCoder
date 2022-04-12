#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    double H;
    cin >> H;

    double x = sqrt(H*(12800000+H));

    cout << fixed << setprecision(8) << x << endl;

    return 0;
}