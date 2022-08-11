#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

ll solve1(ll N, ll M, vector<ll> A, vector<ll> B){
    sort(all(A));
    sort(all(B));
    
    ll ans = 1000000001;
    rep(i, N){
        auto itr = lower_bound(all(B), A.at(i));
        if(itr != B.end() && abs(*itr-A.at(i)) < ans){
            ans = abs(*itr-A.at(i));
        }
        if(itr != B.begin()){
            --itr;
            if(itr != B.end() && abs(*itr-A.at(i)) < ans){
                ans = abs(*itr-A.at(i));
            }
        }
    }
    return ans;
}

ll solve2(ll N, ll M, vector<ll> A, vector<ll> B){
    ll ans = 1000000001;
    rep(i, N){
        rep(j, M){
            if(abs(A.at(i)-B.at(j)) < ans){
                ans = abs(A.at(i)-B.at(j));
            }
        }
    }
    return ans;
}

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N, M;
    cin >> N >> M;
    vector<ll> A(N), B(M);
    rep(i, N) cin >> A.at(i);
    rep(i, M) cin >> B.at(i);

   sort(all(A));
    sort(all(B));
    
    ll ans = 1000000001;
    rep(i, N){
        auto itr = lower_bound(all(B), A.at(i));
        if(itr != B.end() && abs(*itr-A.at(i)) < ans){
            ans = abs(*itr-A.at(i));
        }
        if(itr != B.begin()){
            --itr;
            if(itr != B.end() && abs(*itr-A.at(i)) < ans){
                ans = abs(*itr-A.at(i));
            }
        }
    }
    cout << ans << endl;

    // std::random_device seed_gen;
	// std::mt19937_64 engine(seed_gen());
	// while (true) {
	// 	long long N = engine() % (long long)10;
	// 	long long M = engine() % (long long)10;
    //     vector<ll> A(N), B(M);
    //     rep(i, N) A.at(i) = engine() % (long long)1e9 + 1;
    //     rep(i, M) B.at(i) = engine() % (long long)1e9 + 1;
	// 	cout << "checking input : " << endl;
    //     rep(i, N) cout << A.at(i) << " ";
    //     cout << endl;
	// 	rep(i, M) cout << B.at(i) << " ";
    //     cout << endl;
	// 	long long sol1 = solve1(N, M ,A, B);
	// 	long long sol2 = solve2(N, M, A, B);
	// 	if (sol1 == sol2) {
	// 		cout << "OK!" << endl;
	// 	}
	// 	else {
	// 		cout << "NG!" << endl;
	// 		cout << "Solver1 : " << sol1 << endl;
	// 		cout << "Solver2 : " << sol2 << endl;
	// 		break;
	// 	}
	// }

    return 0;
}