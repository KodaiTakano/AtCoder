#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, n;
    cin >> N;
    // 出力後ならTure
    bool b = false;

    vector<int> num(2*N+1);

    // numを[1,2,3,...,2*N+1]の配列にする
    for(int i = 0; i < 2*N+1; i++){
        num.at(i) = i + 1;
    }

    for(int i = 0; i < 2*N+1; i++){
        if(num.at(i) != 0){
            num.at(i) = 0;
            // cout << "出力";
            cout << i+1 << endl;
            b = true;
        }
        if(b == true){
            // cout << "入力";
            cin >> n;
            if(n == 0) return 0;
            num.at(n-1) = 0;
            b = false;
            // for(int j = 0; j < 2*N+1; j++){
            //     cout << num.at(j) << " ";
            // }
        }
    }
}
