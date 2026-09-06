class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            int next = nums[(i + 1) % n];  
            if (nums[i] > next) {
                count++;
                if (count >= 2) return false;
            }
        }
        return true;
    }
};
