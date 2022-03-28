#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    vector<int> B(2001);

    for(int i = 0; i < 2001; i++){
        B.at(i) = i;
    }

    cin >> N;
    vector<int> A(N);
    
    for(int i = 0; i < N; i++){
        cin >> A.at(i);
    }
    for(int i = 0; i < N; i++){
        B.at(A.at(i)) = 2001;
    }
    // for(int i = 0; i < N; i++){
    //     cout << B.at(i) << endl;
    // }

    for(int i = 0; i < 2001; i++){
        if(B.at(i) != 2001){
            cout << i << endl;
            break;
        }
    }

}