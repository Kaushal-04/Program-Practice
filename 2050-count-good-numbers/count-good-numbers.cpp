class Solution {
public:
    const int MOD = 1000000007;
    
    long long modPow(long long base, long long exp, int mod) {
        long long result = 1;
        while (exp > 0) {
            if (exp % 2 == 1) {
                result = (result * base) % mod;
            }
            base = (base * base) % mod;
            exp /= 2;
        }
        return result;
    }
    
    int countGoodNumbers(long long n) {
        long long ans = 1;
        long long e, o;
        
        if (n % 2 == 0) {
            e = n / 2;
            o = n / 2;
        } else {
            e = (n / 2) + 1;
            o = n / 2;
        }
        ans = (ans * modPow(5, e, MOD)) % MOD;
        ans = (ans * modPow(4, o, MOD)) % MOD;
        
        return (int)ans;
    }
};
