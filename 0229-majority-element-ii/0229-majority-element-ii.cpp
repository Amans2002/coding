class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1 = 0, cnt2 = 0;
        int maj1 = INT_MIN, maj2 = INT_MIN;

        
        for (int num : nums) {
            if (maj1 == num) {
                cnt1++;
            } else if (maj2 == num) {
                cnt2++;
            } else if (cnt1 == 0) {
                maj1 = num;
                cnt1 = 1;
            } else if (cnt2 == 0) {
                maj2 = num;
                cnt2 = 1;
            } else {
                cnt1--;
                cnt2--;
            }
        }

        
        cnt1 = 0, cnt2 = 0;
        for (int num : nums) {
            if (num == maj1) cnt1++;
            else if (num == maj2) cnt2++;
        }

        vector<int> ans;
        int threshold = nums.size() / 3; 

        if (cnt1 > threshold) ans.push_back(maj1);
        if (cnt2 > threshold) ans.push_back(maj2);

        return ans;
    }
};
