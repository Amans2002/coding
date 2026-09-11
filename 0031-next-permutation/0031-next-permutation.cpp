class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // for (int i = nums.size() - 1; i > 0; i--) {
            
        //     if (nums[i] > nums[i - 1]) {
        //         swap(nums[i], nums[i - 1]);

        //         reverse(nums.begin() + i, nums.end());

        //         break;
        //     }
        //     else if (i == 1) {
        //         reverse(nums.begin(), nums.end());
        //     }
        // }
        next_permutation(nums.begin(),nums.end());
    }
};