class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        long long sum=(n*(n+1))/2;
        cout<<sum;

        for(int i=0;i<nums.size();i++){
            sum-=nums[i];
            cout<<sum;
        }
        return sum;
    }
};