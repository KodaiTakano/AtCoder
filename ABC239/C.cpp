#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    // x1, y1, x2, y2
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    double distance = sqrt((a-c) * (a-c) + (b-d) * (b-d));

    if(distance == sqrt(2) && abs(a-c) == 1 && abs(b-d) == 1){
        cout << "Yes" << endl;
    }else if(distance == 2){
        if(abs(a-c) == 2 && abs(b-d) == 0) cout << "Yes" << endl;
        if(abs(a-c) == 0 && abs(b-d) == 2) cout << "Yes" << endl;
    }else if(distance == sqrt(10)){
        if(abs(a-c) == 3 && abs(b-d) == 1) cout << "Yes" << endl;
        if(abs(a-c) == 1 && abs(b-d) == 3) cout << "Yes" << endl;
    }else if(distance == 4){
        if(abs(a-c) == 4 && abs(b-d) == 0) cout << "Yes" << endl;
        if(abs(a-c) == 0 && abs(b-d) == 4) cout << "Yes" << endl;
    }else if(distance == sqrt(20)){
        if(abs(a-c) == 2 && abs(b-d) == 4) cout << "Yes" << endl;
        if(abs(a-c) == 4 && abs(b-d) == 2) cout << "Yes" << endl;
    }else if(distance == sqrt(18)){
        if(abs(a-c) == 3 && abs(b-d) == 3) cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}