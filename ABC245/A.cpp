#include <bits/stdc++.h>
using namespace std;

int main() {
    int a , b, c, d;

    cin >> a >> b >> c >> d;

    if(a < c){
        cout << "Takahashi" << endl;
    }
    if(a == c){
        if(b <= d){
            cout << "Takahashi" << endl;
        }
        if(b > d){
            cout << "Aoki" << endl;
        }
    }
    if(a > c){
        cout << "Aoki" << endl;
    }
}