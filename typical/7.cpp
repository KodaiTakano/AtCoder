#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    int N;
    cin >> N;
    vector<int> A(N);
    rep(i, N) cin >> A.at(i);
    sort(all(A));
    int Q, B;
    cin >> Q;
    rep(i, Q){
        cin >> B;
        if(lower_bound(all(A), B)-A.begin()==0){
            cout << abs(A.at(lower_bound(all(A), B)-A.begin())-B) << endl;
        }else if(lower_bound(all(A), B)-A.begin()==N){
            cout << abs(A.at(lower_bound(all(A), B)-A.begin()-1)-B) << endl;
        }else{
            cout << min(abs(A.at(lower_bound(all(A), B)-A.begin())-B), abs(A.at(lower_bound(all(A), B)-A.begin()-1)-B)) << endl;
        }
    }

    return 0;
}