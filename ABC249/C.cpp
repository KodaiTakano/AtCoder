#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    size_t N;
    int K;
    cin >> N >> K;
    vector<string> S(N);
    rep(i, N) cin >> S.at(i);

    vector<string> use_locate;
    for (int tmp = 0; tmp < (1 << N); tmp++) {
        bitset<16> s(tmp);
        use_locate.push_back(s.to_string().substr(16-N));
    }
    // rep(i, use_locate.size()) cout << use_locate.at(i) << endl;

    vector<int> count(pow(2,N),0);
    
    rep(i, use_locate.size()){
        map<char, int> use_string;
        // cout << use_locate.at(i) << endl;
        rep(j, N){
            if(use_locate.at(i).at(j) == '1'){
                rep(k, S.at(j).size()){
                    use_string[S.at(j).at(k)] += 1;
                    // cout << S.at(j).at(k) << endl;
                }
            }
            // cout << "finish" << endl;
        }
        for(auto itr = use_string.begin(); itr != use_string.end(); ++itr) {
            if(itr->second == K){
                count.at(i)++;
            }   
        }
    }

    cout << *max_element(all(count)) << endl;

    return 0;
}