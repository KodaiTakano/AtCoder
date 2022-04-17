#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)


int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    int A, B, K;
    cin >> A >> B >> K;

    long long slime = A;
    long long count = 0;
    while (1){
        if(slime >= B){
            cout << count << endl;
            return 0;
        }
        slime = slime * K;
        count++;
    }
    
    return 0;
}