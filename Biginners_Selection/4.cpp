#include <bits/stdc++.h>
using namespace std;

int main (void){
    int A, B, C, X;
    cin >> A;
    cin >> B;
    cin >> C;
    cin >> X;

    int sum;
    int count = 0;
    for(int i = 0; i < A+1; i++){
        for(int j = 0; j < B+1; j++){
            for(int k = 0; k < C+1; k++){
                sum = i * 500 + j * 100 + k * 50;
                // cout << sum << endl;
                if(sum == X){
                    // cout << "count" << endl;
                    count++;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}