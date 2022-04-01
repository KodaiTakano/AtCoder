#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main (void){
    int V, A, B, C;

    cin >> V >> A >> B >> C;

    rep(i, 100000){
        V -= A;
        if(V < 0){
            cout << "F" << endl;
            break;
        }
        V -= B;
        if(V < 0){
            cout << "M" << endl;
            break;
        }
        V -= C;
        if(V < 0){
            cout << "T" << endl;
            break;
        }

    }


   return 0;
}