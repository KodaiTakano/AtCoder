#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    string S;
    cin >> S;
    if(S.size()==1){
        cout << "Yes" << endl;
        return 0;
    }
    
    if(S.at(0)=='o'){
        rep1(i, S.size()){
            if(i%3==0&&S.at(i)!='o'){
                cout << "No" << endl;
                return 0;
            }else if(i%3!=0 && S.at(i)!='x'){
                cout << "No" << endl;
                return 0;
            }
        }
    }else{
        if(S.at(1)=='x'){
            rep1(i, S.size()){
                if(i%3==2 && S.at(i)!='o'){
                    cout << "No" << endl;
                    return 0;
                }else if(i%3!=2 && S.at(i)!='x'){
                    cout << "No" << endl;
                    return 0;
                }
            }
        }else{
            rep1(i, S.size()){
                if(i%3==1 && S.at(i)!='o'){
                    cout << "No" << endl;
                    return 0;
                }else if(i%3!=1 && S.at(i)!='x'){
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "Yes" << endl;

    return 0;
}