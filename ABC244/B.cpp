#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string T;

    cin >> N;
    cin >> T;
    
    vector<int> place(2);
    // 向いている向き(0:東, 1:南, 2:西, 3:北)
    int dir = 0;

    for(int i = 0; i < N; i++){
        if(T.at(i) == 'S'){
            switch (dir)
            {
            case 0:
                place.at(0) += 1;
                break;
            case 1:
                place.at(1) -= 1;
                break;
            case 2:
                place.at(0) -= 1;
                break;
            case 3:
                place.at(1) += 1;
                break;
            default:
                break;
            }
        }else{
            switch (dir)
            {
            case 0:
                dir = 1;
                break;
            case 1:
                dir = 2;
                break;
            case 2:
                dir = 3;
                break;
            case 3:
                dir = 0;
                break;
            default:
                break;
            }
        }
    }
    cout << place.at(0) << " " << place.at(1) << endl;
}