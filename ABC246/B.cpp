#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    int A, B;
    cin >> A>> B;
    double C = sqrt(A*A+B*B);

    cout << A/C << " " << B/C << endl;

    return 0;
}