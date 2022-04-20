#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define ll long long 

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    int A, B, C;
    cin >> A >> B >> C;

    if(A==7 && B==5 && C==5){
        cout << "YES" << endl;
    }else if(A==5 && B==7 && C==5){
        cout << "YES" << endl;
    }else if(A==5 && B==5 && C==7){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}