#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    int N, Q;
    cin >> N >> Q;
    vector<int> A(N);
    rep(i , N) cin >> A.at(i);

    int count=0;
    rep(i, Q){
        int T, x, y, temp;
        cin >> T >> x >> y;
        switch (T){
            case 1:
                // cout << "1" << endl;
                if(x-1-count < 0){
                    x += N;
                }
                if(y-1-count < 0){
                    y += N;
                }
                temp = A.at(x-1-count);
                A.at(x-1-count) = A.at(y-1-count);
                A.at(y-1-count) = temp;
                // rep(k, N) cout << A.at(k) << " ";
                // cout << endl;
                break;
            case 2:
                // cout << "2" << endl; 
                count++;
                count %= N;
                // rep(k, N) cout << A.at(k) << " ";
                // cout << endl;
                break;
            case 3:
                // cout << "3" << endl;
                if(x-1-count < 0){
                    x += N;
                }
                cout << A.at(x-1-count) << endl;
                // rep(k, N) cout << A.at(k) << " ";
                // cout << endl;
                break;
            default:
                cout << "default" << endl;
                break;
        }
    }

    return 0;
}