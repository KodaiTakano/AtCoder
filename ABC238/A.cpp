#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define ll long long 

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    int a;
    cin >> a;
    if(pow(2,a) > pow(a,2)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}