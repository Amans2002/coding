class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0;
        int j=0;
        int ans=0;
        while(j<nums.size()){
            if(nums[j]==1){
                j++;
            }
            else{
               ans=max(ans,j-i);
               j++;
               i=j;
               
            }
        }
        ans=max(ans,j-i);
        return ans;
    }
};