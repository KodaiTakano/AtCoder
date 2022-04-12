#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

bool IsPrime(int num)
{
    if (num < 2) return false;
    else if (num == 2) return true;
    else if (num % 2 == 0) return false; // 偶数はあらかじめ除く

    double sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2)
    {
        if (num % i == 0)
        {
            // 素数ではない
            return false;
        }
    }

    // 素数である
    return true;
}

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    int A, B, C, D;
    cin >> A >> B >> C >> D;

    for(int i = A; i < B+1; i++){
        // (i,j)の時に素数じゃなかったら+1
        int count = 0;
        for(int j = C; j < D+1; j++){
            if(IsPrime(i + j)){
                break;
            }
            count++;
            // iの時にどのjでも素数でない
            if(count == D-C+1){
                cout << "Takahashi" << endl;
                return 0;
            }
        }
    }

    cout << "Aoki" << endl;

    return 0;
}