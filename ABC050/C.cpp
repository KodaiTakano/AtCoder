#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define ll long long 
#define all(x) x.begin(), x.end()

template<int MOD> struct Fp {
    long long val;
    constexpr Fp(long long v = 0) noexcept : val(v % MOD) {
        if (val < 0) val += MOD;
    }
    constexpr int getmod() { return MOD; }
    constexpr Fp operator - () const noexcept {
        return val ? MOD - val : 0;
    }
    constexpr Fp operator + (const Fp& r) const noexcept { return Fp(*this) += r; }
    constexpr Fp operator - (const Fp& r) const noexcept { return Fp(*this) -= r; }
    constexpr Fp operator * (const Fp& r) const noexcept { return Fp(*this) *= r; }
    constexpr Fp operator / (const Fp& r) const noexcept { return Fp(*this) /= r; }
    constexpr Fp& operator += (const Fp& r) noexcept {
        val += r.val;
        if (val >= MOD) val -= MOD;
        return *this;
    }
    constexpr Fp& operator -= (const Fp& r) noexcept {
        val -= r.val;
        if (val < 0) val += MOD;
        return *this;
    }
    constexpr Fp& operator *= (const Fp& r) noexcept {
        val = val * r.val % MOD;
        return *this;
    }
    constexpr Fp& operator /= (const Fp& r) noexcept {
        long long a = r.val, b = MOD, u = 1, v = 0;
        while (b) {
            long long t = a / b;
            a -= t * b; swap(a, b);
            u -= t * v; swap(u, v);
        }
        val = val * u % MOD;
        if (val < 0) val += MOD;
        return *this;
    }constexpr bool operator == (const Fp& r) const noexcept {
        return this->val == r.val;
    }
    constexpr bool operator != (const Fp& r) const noexcept {
        return this->val != r.val;
    }
    friend constexpr ostream& operator << (ostream &os, const Fp<MOD>& x) noexcept {
        return os << x.val;
    }
    friend constexpr Fp<MOD> modpow(const Fp<MOD> &a, long long n) noexcept {
        if (n == 0) return 1;
        auto t = modpow(a, n / 2);
        t = t * t;
        if (n & 1) t = t * a;
        return t;
    }
};

const int MOD = 1000000007;
using mint = Fp<MOD>;

int main (void){
    // ifstream in("./../input.txt");
    // cin.rdbuf(in.rdbuf());

    ll N;
    cin >> N;
    vector<ll> A(N);
    map<ll, ll> mp;
    if(N%2==0){
        rep(i, N){
            cin >> A.at(i);
            mp[A.at(i)]++;
            if(A.at(i)%2==0){
                cout << "0" << endl;
                return 0;
            }
        }
        for(auto itr = mp.begin(); itr != mp.end(); itr++) {
            if(itr->first == 0){
                if(itr->second != 1){
                    cout << "0" << endl;
                    return 0;
                }
            }else{
                if(itr->second%2 != 0){
                    cout << "0" << endl;
                    return 0;
                }
            }
        }
    }else{
        rep(i, N){
            cin >> A.at(i);
            mp[A.at(i)]++;
            if(A.at(i)%2==1){
                cout << "0" << endl;
                return 0;
            }
        }
        for(auto itr = mp.begin(); itr != mp.end(); itr++) {
            if(itr->first == 0){
                if(itr->second != 1){
                    cout << "0" << endl;
                    return 0;
                }
            }else{
                if(itr->second%2 != 0){
                    cout << "0" << endl;
                    return 0;
                }   
            }
        }
    }

    mint ans = 1;
    rep(i, N/2){
        ans *= 2;
    }
    cout << ans << endl;

    return 0;
}