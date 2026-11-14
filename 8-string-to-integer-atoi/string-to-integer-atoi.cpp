
class Solution {
public:
    int myAtoi(string s) {

        int i = 0;
        int sign = 1;
        long long ans = 0;

        // Step 1: Ignore leading spaces
        while(i < s.size() && s[i] == ' ') {
            i++;
        }

        // Step 2: Check sign
        if(i < s.size() && s[i] == '-') {
            sign = -1;
            i++;
        }
        else if(i < s.size() && s[i] == '+') {
            sign = 1;
            i++;
        }

        // Step 3: Convert digits
        while(i < s.size() && s[i] >= '0' && s[i] <= '9') {

            int digit = s[i] - '0';

            // Step 4: Check overflow
            if(ans > INT_MAX / 10 ||
              (ans == INT_MAX / 10 && digit > (sign == 1 ? 7 : 8))) {

                if(sign == 1)
                    return INT_MAX;
                else
                    return INT_MIN;
            }

            ans = ans * 10 + digit;
            i++;
        }

        return ans * sign;
    }
};
