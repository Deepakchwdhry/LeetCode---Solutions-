class Solution {
public:
    double myPow(double x, int n) {

        long double ans = 1;
        long double base = x;

        long long power = n;

        if(power < 0) {
            base = 1 / base;
            power = -power;
        }

        while(power > 0) {

            if(power % 2 == 1) {
                ans *= base;
            }

            base *= base;
            power /= 2;
        }

        return (double)ans;
    }
};