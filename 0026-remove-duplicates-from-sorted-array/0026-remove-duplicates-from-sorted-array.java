class Solution {
    public int removeDuplicates(int[] nums) {
      
        int ans=0;
        for(int k=1;k<nums.length;k++){

            if(nums[k]!=nums[ans]){
                ans++;
                nums[ans]=nums[k];
            }
            
            
        }
        return ans+1;
    }
}