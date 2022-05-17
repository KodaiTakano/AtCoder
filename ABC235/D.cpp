#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define rep1(i, n) for (ll i = 1; i < (n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

ll mypow(ll _x, ll _n){
    ll ret = 1;
    while(0 < _n){
        if((_n % 2) == 0){
            _x *= _x;
            _n >>= 1;
        }else{
            ret *= _x;
            --_n;
        }
    }
    return ret;
}
ll action1(ll num, ll a){
    return num*a;
}
ll action2(ll num){
    if(num < 10 || num%10==0){
        return num; // 再考？
    }
    int first = num%10;
    string temp = to_string(num);
    return first*mypow(10, temp.size()-1)+num/10;
}
ll backaction1(ll num, ll a){
    return num/a;
}
ll backaction2(ll num){
    string temp = to_string(num);
    int top = int(temp.at(0)-'0');
    // cout << top << endl;
    return (num - top*mypow(10, temp.size()-1))*10 + top;
}
ll countDigit(ll N){
    string temp;
    
    temp = to_string(N);
    return temp.size();
}

void D(ll a, ll N, vector<ll>& dp){
    ll digitnum = countDigit(N);
    ll temp = N;
    rep(i, digitnum){
        ll temp=backaction2(temp);
        if(dp.at(temp)==0){
            dp.at(temp) = dp.at(action2(temp)) + 1;
        }else{
            dp.at(temp)= min(dp.at(temp),dp.at(action2(temp)) + 1);
        }
        if(temp%a==0){
            if(dp.at(backaction1(temp, a))==0){
                dp.at(temp%a) = dp.at(temp) + 1;
            }else{
                dp.at(temp%a) = min(dp.at(temp % a), dp.at(temp) + 1);
            }
            D(a, temp%a, dp);
        }
    }

}

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll a, N;
    cin >> a >> N;

    vector<ll> dp(N+1);
    
    // dp.at(x) xの値になるまでに何回そうさしたか。
    dp.at(N)=0;
    D(a, N, dp);


    ll digitnum = countDigit(N);
    

    for(int i = N; i > 0; i--){
        if(i%a == 0){
            if(dp.at(i%a)==0){
                dp.at(i%a) = dp.at(i)+1;
            }else{
                dp.at(i%a) = min(dp.at(i%a),dp.at(i)+1);
            }
        }
        if(i>9){
            if(dp.at(backaction2(i))==0){
                dp.at(backaction2(i)) = dp.at(i)+1;
            }else{
                dp.at(backaction2(i)) = min(dp.at(backaction2(i)),dp.at(i)+1);
            }
            if(i < backaction2(i) && backaction2(i) < N+1){
                i = backaction2(i)+1;
            }
        }
    }
    if(dp.at(1) == 0){
        cout << "-1" << endl;
    }else{
        cout << dp.at(1) << endl;
    }
    return 0;
}