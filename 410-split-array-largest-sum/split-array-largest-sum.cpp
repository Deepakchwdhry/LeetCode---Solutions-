
class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        while (low < high) {
            int mid = low + (high - low) / 2;

            int parts = 1;
            int sum = 0;

            for (int i = 0; i < nums.size(); i++) {
                if (sum + nums[i] > mid) {
                    parts++;
                    sum = nums[i];
                } else {
                    sum += nums[i];
                }
            }

            if (parts <= k) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};
