#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (n); i++)
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

    int N;
    string S;
    cin >> N >> S;

    bool aexi=false, texi=false, cexi=false, oexi=false, dexi=false, eexi=false, rexi=false;
    mint acount=0, tcount=0, ccount=0, ocount=0, dcount=0, ecount=0, rcount=0;
    rep(i, N){
        if(S.at(i)=='a' && texi==false){
            aexi=true;
            acount=acount+1;
        }
        if(S.at(i)=='t' && aexi==true && cexi==false){
            texi=true;
            tcount=tcount+1;
        }
        if(S.at(i)=='c' && texi==true && oexi==false){
            cexi=true;
            ccount=ccount+1;
        }
        if(S.at(i)=='o' && cexi==true && dexi==false){
            oexi=true;
            ocount=ocount+1;
        }
        if(S.at(i)=='d' && oexi==true && eexi==false){
            dexi=true;
            dcount=dcount+1;
        }
        if(S.at(i)=='e' && dexi==true && rexi==false){
            eexi=true;
            ecount=ecount+1;
        }
        if(S.at(i)=='r' && eexi==true){
            rexi=true;
            rcount=rcount+1;
        }
    }

    cout << acount*tcount*ccount*ocount*dcount*ecount*rcount << endl;


    return 0;
}