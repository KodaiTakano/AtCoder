#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

// Sのi文字目ががdでもeでもない時0
bool eord(string S, int i){
    if(S.at(i) == 'e' || S.at(i) == 'd'){
        return 1;
    }
    return 0;
}

void check(string S, vector<int>& ok, int n){
    if(S.at(n) == 'd'){
        if(S.substr(n,5) == "dream"){
            ok.push_back(n+4);
        }
        if(S.substr(n,7) == "dreamer"){
            ok.push_back(n+6);
        }
    }
    if(S.at(n) == 'e'){
        if(S.substr(n,5) == "erase"){
            ok.push_back(n+4);
        }
        if(S.substr(n,6) == "eraser"){
            ok.push_back(n+5);
        }
    }
}

// void check_saiki(string S, vector<int>& ok, int n){
//     if(n == int(S.size())-8){
//         cout << "YES" << endl;
//         return;
//     }
//     if(S.at(n) == 'd'){
//         if(S.substr(n,5) == "dream"){
//             ok.push_back(n+4);
//             check_saiki(S, ok, int(ok.back()));
//         }
//         if(S.substr(n,7) == "dreamer"){
//             ok.push_back(n+6);
//             check_saiki(S, ok, int(ok.back()));
//         }
//     }
//     if(S.at(n) == 'e'){
//         if(S.substr(n,5) == "erase"){
//             ok.push_back(n+4);
//             check_saiki(S, ok, int(ok.back()));
//         }
//         if(S.substr(n,6) == "eraser"){
//             ok.push_back(n+5);
//             check_saiki(S, ok, int(ok.back()));
//         }
//     }
// }

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    string S;
    cin >> S;
    rep(i, 7) S.push_back('z');
    int Ss = S.size();
    // cout << S << endl;

    vector<int> OK;

    // if(eord(S, 0)){
    //     check_saiki(S, OK, 0);
    // }else{
    //     cout << "NO" << endl;
    // }

    // return 0;


    rep(i, Ss){
        int OKs = OK.size();
        if(OKs > 0){
            if(*max_element(OK.begin(), OK.end()) == Ss-8){
                cout << "YES" << endl;
                rep(i, OKs) cout << OK.at(i) << endl;
                return 0;
            }
        }
        if(eord(S,i)) check(S, OK, i);
        rep(j, OKs){
            if(eord(S, OK.at(j)+1)) check(S, OK, OK.at(j)+1);
        }
    }
    
    cout << "NO" << endl;

    return 0;
}