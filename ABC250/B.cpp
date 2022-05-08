#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    int N, A, B;
    cin >> N >> A >> B;

    int Acount=-1;
    rep(i, A*N){
        if(i%A == 0){
            Acount++;
        }
        // cout << endl << Acount << endl;
        int Bcount=-1;
        rep(j, B*N){
            if(j%B == 0){
                // cout << Bcount << endl;
                Bcount++;
            }
            if(Acount%2==0){
                if(Bcount%2==0){
                    cout << ".";
                }else{
                    cout << "#";
                }
            }else{
                if(Bcount%2==0){
                    cout << "#";
                }else{
                    cout << ".";
                }
            }
        }
        cout << endl;
    }

    return 0;
}