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
    int Ai, Aj, Ak, count=0;
    for(int i = N-1; i >= 0; i--){
        Ai = A.at(i);
        // cout << Ai << endl;
        for(int j = upper_bound(all(A),Ai)-A.begin()-1; j >= 0; j--){
            Aj = A.at(j);
            Ak = Ai/Aj;
            if(Ai%Aj == 0 && binary_search(all(A), Ak)){
                // cout << Ai << Aj << endl;
                count += upper_bound(all(A), Ak) - A.begin() - (lower_bound(all(A), Ak) - A.begin());
                // cout << count << endl;
            }
        }
    }
    cout << count << endl;

    return 0;
}