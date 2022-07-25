#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define rep1(i, n) for (ll i = 1; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N;
    cin >> N;
    vector<ll> T(N), A(N);
    rep(i, N) cin >> T.at(i) >> A.at(i);

    // ll ans = T.at(0)+A.at(0);
    ll div;
    rep1(i, N){
        if(T.at(i)>=T.at(i-1) && A.at(i)>=A.at(i-1)){
            // ans = T.at(i)+A.at(i);
        }else if(T.at(i)<T.at(i-1) && A.at(i)>=A.at(i-1)){
            if(T.at(i-1)%T.at(i)==0){
                div = T.at(i-1)/T.at(i);
            }else{
                div = T.at(i-1)/T.at(i)+1;
            }
            T.at(i) *= div;
            A.at(i) *= div;
            // ans = T.at(i)+A.at(i);
        }else if(T.at(i)>=T.at(i-1) && A.at(i)<A.at(i-1)){
            if(A.at(i-1)%A.at(i)==0){
                div = A.at(i-1)/A.at(i);
            }else{
                div = A.at(i-1)/A.at(i)+1;
            }
            T.at(i) *= div;
            A.at(i) *= div;
            // ans = T.at(i)+A.at(i);
        }else{
            ll divT, divA;
            if(T.at(i-1)%T.at(i)==0){
                divT = T.at(i-1)/T.at(i);
            }else{
                divT = T.at(i-1)/T.at(i)+1;
            }
            if(A.at(i-1)%A.at(i)==0){
                divA = A.at(i-1)/A.at(i);
            }else{
                divA = A.at(i-1)/A.at(i)+1;
            }
            if(T.at(i)*divT>A.at(i)*divA){
                T.at(i) *= divT;
                A.at(i) *= divT;
                // ans = T.at(i)+A.at(i);
            }else{
                T.at(i) *= divA;
                A.at(i) *= divA;
                // ans = T.at(i)+A.at(i);
            }
        }
    }
    cout << T.at(N-1)+A.at(N-1) << endl;


    return 0;
}