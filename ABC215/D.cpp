#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

vector<ll> prime_factorization(ll N){
    vector<ll> p;
    for(ll i = 2; i*i <= N; i++){
        while(N % i == 0){
            N /= i;
            p.push_back(i);
        }
    }
    if(N != 1LL) p.push_back(N);
    return p;
}

int main (void){
    // vector<ll> B;
    // B=prime_factorization(2);
    // rep(i, B.size()){
    //     cout << B.at(i) << endl;
    // }

    ifstream in("./../input.txt");
    cin.rdbuf(in.rdbuf());

    ll N, M;
    cin >> N >> M;
    vector<ll> A(N);
    rep(i, N) cin >> A.at(i);

    vector<ll> all_prime, prime;
    rep(i, N){
        prime = prime_factorization(A.at(i));
        all_prime.insert(all_prime.end(), prime.begin(), prime.end());
    }


    sort(all(all_prime));
    all_prime.erase(unique(all(all_prime)), all_prime.end());
    
    
    // rep(i, all_prime.size()){
    //     cout << all_prime.at(i) << endl;
    // }

    vector<ll> ans;
    rep1(i, 1, M+1){
        rep(j, all_prime.size()){
            if(gcd(i, all_prime.at(j)) != 1){
                break;
            }
            if(j == all_prime.size()-1){
                ans.push_back(i);
            }
        }
    }

    cout << ans.size() << endl;
    rep(i, ans.size()){
        cout << ans.at(i) << endl;
    }

    return 0;
}