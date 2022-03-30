#include <bits/stdc++.h>
using namespace std;

int main (void){
    int N;
    cin >> N;
    vector<int> a(N);
    for(int i = 0; i < N; i++){
        cin >> a.at(i);
    }

    int max1, max2, answer = 0;
    for(int i = 0; i < N; i++){
        max1 = *max_element(a.begin(), a.end());
        // cout << max1 << endl;
        // 最大値だったところを0に
        for(int j = 0; j < N; j++){
            if(a.at(j) == max1){
                a.at(j) = 0;
                break;
            }
        }
        // 2番目の最大値取得
        max2 = *max_element(a.begin(), a.end());
        // cout << max1 << endl;
        // 最大値だったところを0に
        for(int j = 0; j < N; j++){
            if(a.at(j) == max2){
                a.at(j) = 0;
                break;
            }
        }
        answer += max1 - max2;
    }

    cout << answer << endl;

    return 0;
}