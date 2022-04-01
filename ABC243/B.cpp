#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main (void){

    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> B(N);
    rep(i, N) cin >> A.at(i);
    rep(i, N) cin >> B.at(i);

        int count_1 = 0, count_2 = 0; 

    rep(i, N){
        if(A.at(i) == B.at(i)) count_1++;
        rep(j, N){
            if(A.at(i) == B.at(j)) count_2++;
        }
    }

    cout << count_1 << endl;
    cout << count_2 - count_1 << endl;

    return 0;
}