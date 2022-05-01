#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

bool isprime(long long N) {
    if (N < 2) return false;
    for (long long i = 2; i * i <= N; ++i) {
        if (N % i == 0) return false;
    }
    return true;
}

vector<pair<long long, long long> > prime_factorize(long long N) {
    vector<pair<long long, long long> > res;
    for (long long a = 2; a * a <= N; ++a) {
        if (N % a != 0) continue;
        long long ex = 0; // 指数

        // 割れる限り割り続ける
        while (N % a == 0) {
            ++ex;
            N /= a;
        }

        // その結果を push
        res.push_back({a, ex});
    }

    // 最後に残った数について
    if (N != 1) res.push_back({N, 1});
    return res;
}

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N;
    cin >> N;

    int count=0;
    const auto &res = prime_factorize(N);
    for (auto p : res) {
        if(isprime(p.first)){
            for (int i = 0; i < p.second; ++i) count++;
        }
    }

    // cout << count << endl;

    int ans=0;
    while(count!=1){
        count++;
        count /= 2;
        ans++;
        // cout << "count=" << count << endl;
    }
    cout << ans << endl;

    return 0;
}