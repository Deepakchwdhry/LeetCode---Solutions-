
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        int left = n, right = -1;
        int maxSoFar = INT_MIN;
        int minSoFar = INT_MAX;

        // Left to right
        for (int i = 0; i < n; i++) {
            maxSoFar = max(maxSoFar, nums[i]);

            if (nums[i] < maxSoFar) {
                right = i;
            }
        }

        // Right to left
        for (int i = n - 1; i >= 0; i--) {
            minSoFar = min(minSoFar, nums[i]);

            if (nums[i] > minSoFar) {
                left = i;
            }
        }

        if (right == -1) return 0;

        return right - left + 1;
    }
};
