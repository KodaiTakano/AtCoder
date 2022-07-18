#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    ifstream in("./../input.txt");
    cin.rdbuf(in.rdbuf());

    ll N, X, Y, Z;
    cin >> N >> X >> Y >> Z;
    vector<ll> A(N), B(N), C(N);
    vector<bool> pass(N);
    rep(i, N) cin >> A.at(i);
    rep(i, N){
        cin >> B.at(i);
        C.at(i) = A.at(i) + B.at(i);
    }

    vector<ll> a=A, b=B, c=C;
    if(X>0){
        sort(all(a));
        reverse(all(a));
        ll Xscore = a.at(X-1), count=0;
        // cout << Xscore << endl;
        rep(i, N){
            if(A.at(i)>Xscore){
                pass.at(i) = true;
                count++;
            }
        }
        rep(i, N){
            if(count == X){
                break;
            }
            if(A.at(i)==Xscore){
                pass.at(i) = true;
                count++;
            }
        }

        rep(i, N){
            if(pass.at(i) == true){
                b.at(i) = -1;
                // cout << i << endl;
            }
        }
    }

    if(Y>0){
        sort(all(b));
        reverse(all(b));
        ll Yscore = b.at(Y-1), count=0;
        // cout << Yscore << endl;
        rep(i, N){
            if(pass.at(i)==false){
                if(B.at(i)>Yscore){
                    pass.at(i) = true;
                    count++;
                }
            }
        }
        rep(i, N){
            if(count == Y){
                break;
            }
            if(pass.at(i)== false){
                if(B.at(i)==Yscore){
                    pass.at(i) = true;
                    count++;
                }
            }
        }
        rep(i, N){
            if(pass.at(i) == true){
                c.at(i) = -1;
                // cout << i << endl;
            }
        }
    }

    if(Z>0){
        sort(all(c));
        reverse(all(c));
        ll Zscore = c.at(Z-1), count=0;
        // cout << Zscore << endl;
        rep(i, N){
            if(pass.at(i) == false){
                if(C.at(i)>Zscore){
                    pass.at(i) = true;
                    count++;
                }
            }
        }
        rep(i, N){
            if(count == Z){
                break;
            }
            if(pass.at(i) == false){
                if(C.at(i)==Zscore){
                    pass.at(i) = true;
                    count++;
                }
            }
        }
    }


    rep(i, N){
        if(pass.at(i) == true){
            cout << i+1 << endl;
        }
    }

    return 0;
}