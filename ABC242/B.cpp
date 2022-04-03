#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main (void){

    string S;
    cin >> S;

    char temp;
    rep(i, S.size()){
        for(int j = i + 1; j < S.size(); j++){
            if(S.at(i) > S.at(j)){
                temp = S.at(i);
                S.at(i) = S.at(j);
                S.at(j) = temp;
            }
        }
    }
    cout << S << endl;

    return 0;
}