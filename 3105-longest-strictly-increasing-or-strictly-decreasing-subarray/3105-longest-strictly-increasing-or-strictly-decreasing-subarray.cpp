class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return 1;

        int ans = 1;
        int i = 0;
        int j = 1;

        while (j < n) {

            // increasing segment
            if (nums[j] > nums[j - 1]) {
                i = j - 1;
                while (j < n && nums[j] > nums[j - 1])
                    j++;

                ans = max(ans, j - i);
            }

            // decreasing segment
            else if (nums[j] < nums[j - 1]) {
                i = j - 1;
                while (j < n && nums[j] < nums[j - 1])
                    j++;

                ans = max(ans, j - i);
            }

            else {
                j++;
            }
        }

        return ans;
    }
};