class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i=0;
        int j=nums.size()-1;
        int ans=-1;
        while(j>=i){
            int curr = i + (j - i) / 2;
            if(nums[curr]==target){
                 ans=curr;
                break;
            }
            else if(nums[curr]>target){
                 j=curr-1;
                
            }
            else if(nums[curr]<target){
                 i=curr+1;
                
            }
        }
        return ans;
    }
};