#include <bits/stdc++.h>
using namespace std;

int main (void){
    int N, A, B;

    cin >> N >> A >> B;

    int sum_answer = 0;
    for(int i = 1; i < N+1; i++){
        int sum_10 = 0;
        int n = i;
        for(int j = 0; j < 5; j++){
            sum_10 += n%10;
            n = n / 10;
            // cout << sum_10 << endl;
        }
        if(A <= sum_10 && sum_10 <= B){
            sum_answer += i;
        }
    }
    cout << sum_answer << endl;

    return 0;
}