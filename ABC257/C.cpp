#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, n) for (ll i = 1; i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

int main (void){
    ifstream in("./../input.txt");
    cin.rdbuf(in.rdbuf());

    ll N;
    string S;
    cin >> N >> S;
    vector<ll> W(N);
    rep(i, N) cin >> W.at(i);

    vector<pair<ll, int>> A(N);
    rep(i, N){
        int isAdult = int(S.at(i)-'0');
        A.at(i) = make_pair(W.at(i), isAdult);
    }

    // rep(i, N){
    //     cout << A.at(i).first << " " << A.at(i).second << endl;
    // }

    sort(all(A));
    
    // rep(i, N){
    //     cout << A.at(i).first << " " << A.at(i).second << endl;
    // }

    ll child_num = 0, adult_num = 0;
    rep(i, N){
        if(A.at(i).second==1){
            adult_num++;
        }
    }

    int before_isAdult = A.at(0).second;
    ll before_weight = A.at(0).first;
    ll ans = 0;
    ll count = 1;
    rep1(i, N){
        int isAdult = A.at(i).second;
        ll weight = A.at(i).first;
        // if(isAdult==1 && before_isAdult==0 && before_weight==weight){
        //     before_weight = weight;
        //     continue;
        // }

        if(before_isAdult == isAdult){
            count++;
        }else{
            if(isAdult==1){
                if(before_weight == weight){
                    before_isAdult = isAdult;
                    before_weight = weight;
                    continue;
                }
                child_num += count;
                if(child_num + adult_num > ans){
                    ans = child_num + adult_num;
                    // cout << "i= " << i << endl;
                    // cout << ans << endl;
                }
                count=1;
            }else{
                adult_num -= count;
                count = 1;
            }
            // }else{
            //     if(child_num + adult_num - count > ans){
            //         ans = child_num + adult_num - count;
            //         // cout << "i= " << i << endl;
            //         // cout << ans << endl;
            //     }
            //     adult_num -= count;
            //     count=1;
            // }
        }
        before_isAdult = A.at(i).second;
    }

    ll childnum=0;
    rep(i, N){
        if(A.at(i).second==0){
            childnum++;
        }
    }
    if(childnum > ans){
        ans = childnum;
    }

    cout << ans << endl;



    // int ans = 0;
    // int count1 = 1, count2=0;
    // int before_isAdult = A.at(0).second;
    // rep1(i, N){
    //     int isAdult = A.at(i).second;
    //     if(before_isAdult == isAdult){
    //         count1++;
    //         count2++;
    //     }else{
    //         if(count1 > count2){
    //             if(count1 > ans){
    //                 ans = count1;
    //                 count1 = 1;
    //                 count2++;
    //             }
    //         }else{
    //             if(count2 > ans){
    //                 ans = count2;
    //                 count2 = 1;
    //                 count1++;
    //             }
    //         }
    //         before_isAdult = A.at(i).second;
    //     }
    //     if(i == N-1){
    //         if(max(count1, count2) > ans){
    //             ans = max(count1, count2);
    //         }
    //     }
    //     // cout << "i=" << i << endl;
    //     // cout << count1 << " " << count2 << endl;
    // }

    // cout << ans << endl;


    return 0;
}