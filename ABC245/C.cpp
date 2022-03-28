#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K;
    cin >> N;
    vector<int> A(N);
    vector<int> B(N); 
    for(int i = 0; i < N; i++){
        cin >> A.at(i);
    }
    for(int i = 0; i < N; i++){
        cin >> B.at(i);
    }

    vector<vector<int>> X(N, vector<int>(N*N));
    int K;

    // 2^N通りの組み合わせを2次元配列に格納
    for(int i = 0; i < N*N; i++){
        for(int j = 0; j < N; j++){
            
        }
    }

}