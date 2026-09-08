class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majo=0;
        int res=0;
        for(int i=0;i<nums.size();i++){
            if(majo==0){
                res=nums[i];
                majo++;
            }
            else{
               if(res==nums[i]){
                majo++;
               }
               else{
                majo--;
               }
            }
        }
        return res;
    }
};