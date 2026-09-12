class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int lowerbound=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int upperbound=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        vector<int>ans;
        if (lowerbound == nums.size() || nums[lowerbound] != target) {
            return {-1, -1};
        }
        ans.push_back(lowerbound);
        ans.push_back(upperbound-1);
        return ans;

    }
};