#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    int A, B, C, D, E, F, X;
    cin >> A >> B >> C >> D >> E >> F >> X;

    int T_dis=0, A_dis=0, x = X;
    while(x > 0){
        if(x < A){
            T_dis += x * B;
            break;
        }else{
            T_dis += A * B;
            x -= (A+C);
        }
    }
    while(X > 0){
        if(X < D){
            A_dis += X * E;
            break;
        }else{
            A_dis += D * E;
            X -= (D+F);
        }
    }
    if(T_dis > A_dis){
        cout << "Takahashi" << endl;
    }else if (T_dis < A_dis){
        cout << "Aoki" << endl;
    }else{
        cout << "Draw" << endl;
    }  

    return 0;
}