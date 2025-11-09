class Solution {
public:

    double help(double x, long n){
        if(n == 0)  return 1.0;
        if(n < 0)
            return help(1/x, -n);
        if(n % 2 == 0)
            return help(x*x, n/2);
        else
            return x * help(x * x, (n-1)/2);
    }

    double myPow(double x, int n) {
        long l = n;
        return help(x, l);
    }
};