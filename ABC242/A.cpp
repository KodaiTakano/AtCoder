#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main (void){
    
    double A, B, C, X;
    cin >> A >> B >> C >> X;
 
    if(A >= X){
        cout << 1 << endl;
    }else if(B >= X){
        cout << C / (B - A) << endl;
    }else{
        cout << 0 << endl;
    }

    return 0;
}