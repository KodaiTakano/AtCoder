#include <bits/stdc++.h>
using namespace std;

int main (void){    
    string s;
    cin >> s;

    int count = 0;
    for(int i = 0; i < 3; i++){
        if(s.at(i) == '1') count += 1;
    }
    cout << count << endl;

    return 0;
}