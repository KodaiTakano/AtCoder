#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define ll long long 

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    int N;
    cin >> N;
    vector<int> cut(N);

    int A;
    rep(i, N){
        cin >> A;
        if(i == 0){
            cut.at(i) = A;
        }else{
            if(cut.at(i-1) + A > 360){
                cut.at(i) = cut.at(i-1) + A - 360;
            }else{
                cut.at(i) = cut.at(i-1) + A;
            }
        }
    }

    sort(cut.begin(), cut.end());
    vector<int> agree(N);
    agree.at(0) = cut.at(0);
    for(int i = 1; i < N; i++){
        agree.at(i) = cut.at(i) - cut.at(i-1);
    }
    if(cut.at(N-1) > 180){
        cout << *max_element(agree.begin(), agree.end()) << endl;
    }else{
        cout << 360 - cut.at(N-1) << endl;
    }

    return 0;
}