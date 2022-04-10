#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

void S(int n){
    if(n == 1){
        cout << "1 ";
        return;
    }else{
        S(n-1);
        cout << n << " ";
        S(n-1);
    }
}

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    int N;
    cin >> N;

    S(N);
    cout << endl;

    return 0;
}