#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define ll long long 

int main (void){
    ifstream in("./../input.txt");
    cin.rdbuf(in.rdbuf());

    int N;
    int K;
    cin >> N >> K;
    vector<int> D(10, -1), ND;
    rep(i, K){
        int a;
        cin >> a;
        D.at(a) = 1;
    } 
    rep(i, 10){
        if(D.at(i) == -1){
            ND.push_back(i);
        }
    }

    



    


    return 0;
}