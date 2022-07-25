#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define rep1(i, n) for (ll i = 1; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    string A, B, C;
    cin >> A >> B >> C;
    
    int next=1;
    char s;
    while(1){
        switch (next){
        case 1:
            if(A.empty()){
                cout << "A" << endl;
                return 0;
            }
            s = A.at(0);
            if(s=='a') next=1;
            else if(s=='b') next=2;
            else next=3;
            A.erase(A.begin());
            break;
        case 2:
            if(B.empty()){
                cout << "B" << endl;
                return 0;
            }
            s = B.at(0);
            if(s=='a') next=1;
            else if(s=='b') next=2;
            else next=3;
            B.erase(B.begin());
            break;
        case 3:
            if(C.empty()){
                cout << "C" << endl;
                return 0;
            }
            s = C.at(0);
            if(s=='a') next=1;
            else if(s=='b') next=2;
            else next=3;
            C.erase(C.begin());
            break;
        default:
            break;
        }
    }

    return 0;
}