#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

vector<int> num2array(ll num){
    vector<int> vec;
    
    while(num){
        int dig = num%10;
        vec.push_back(dig);
        num /= 10;
    }
    reverse(all(vec));

    return vec;
}


int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll A, B;
    cin >> A >> B;
    if(A < B){
        ll temp = A;
        A = B;
        B = temp;
    }
    vector<int> A_ary=num2array(A), B_ary=num2array(B);

    for(int i=B_ary.size()-1; i>=0; i--){
        // cout << A_ary.at(i+A_ary.size()-B_ary.size()) << " " << B_ary.at(i) << endl;
        if(A_ary.at(i+A_ary.size()-B_ary.size()) + B_ary.at(i) > 9){
            cout << "Hard" << endl;
            return 0;
        }
    }
    cout << "Easy" << endl;

    return 0;
}