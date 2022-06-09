#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

bool is_black(ll N, ll A, ll B, ll i, ll j){
    ll action1_max = max(1-A, 1-B); // -1
    ll action1_min = min(N-A, N-B);
    ll action2_max = max(1-A, B-N);
    ll action2_min = min(N-A, B-1);

    // 操作1
    // 範囲の条件
    // if((A+action1_max<=i && i<=A+action1_min) && (B+action1_max<=j && j<=B+action1_min)){
    //     cout << "action1" << endl;
    // cout << i << " " << j << " " << endl;
        if((A+action1_max-i)==(B+action1_max-j)){
            // cout << "a" << endl;
            return 1;
        }
    // }
    // 操作2
    // if((A+action2_max<=i && i<=A+action2_min) && (B-action2_min<=j && j<=B-action2_max)){
    //     cout << "action2" << endl;
        if((A+action2_max-i)==-(B-action2_max-j)){
            // cout << "b" << endl;
            return 1;
        }
    // }
    return 0;

}

int main (void){
    ifstream in("./../input.txt");
    cin.rdbuf(in.rdbuf());

    ll N, A, B, P, Q, R, S;
    cin >> N >> A >> B >> P >> Q >> R >> S;

    for(ll i=P; i<Q+1; i++){
        for(ll j=R; j<S+1; j++){
            if(is_black(N, A, B, i, j)){
                cout << "#";
            }else{
                cout << ".";
            }
        }
        cout << endl;
    }

    return 0;
}