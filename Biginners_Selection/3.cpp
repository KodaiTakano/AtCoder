#include <bits/stdc++.h>
using namespace std;

int main (void){
    int N;
    cin >> N;

    vector<int> A(N);
    for(int i = 0; i < N; i++){
        cin >> A.at(i);
    }

    int count = 0;

    for(int j = 0; j < 1000000000; j++){
        for(int i = 0; i < N; i++){
            if(A.at(i) % 2 != 0){
                cout << count << endl;
                return 0;
            }else{
                A.at(i) = A.at(i) / 2;
            }
        }
        count++;
    }

    return 0;
}