#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 2; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    ifstream in("./../input.txt");
    cin.rdbuf(in.rdbuf());

    int N, K;
    cin >> N >> K;
    vector<ll> A(N), B(N);
    rep(i, N) cin >> A.at(i) >> B.at(i);

    vector<ll> score(K);
    auto max_itr = max_element(all(B));
    score.at(1) = *max_itr;
    B.erase(max_itr);
    cout << "a" << endl;
    A.erase();
    cout << "b" << endl;

    ll score1, score2;
    rep(i, K){
        auto max1_itr = max_element(all(B));
        auto max2_itr = max_element(all(A));
        score1 = score.at(i-1) + *max1_itr;
        score2 = score.at(i-2) + *max2_itr;
        if(score1 > score2){
            score.at(i) = score1;
            A.erase(max1_itr);
            B.erase(max1_itr);
        }else{
            score.at(i) = score2;
            A.erase(max2_itr);
            B.erase(max2_itr);
        }
    }
    cout << score.at(K-1) << endl;



    return 0;
}