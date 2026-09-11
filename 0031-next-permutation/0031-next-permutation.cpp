// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {
//         // for (int i = nums.size() - 1; i > 0; i--) {
            
//         //     if (nums[i] > nums[i - 1]) {
//         //         swap(nums[i], nums[i - 1]);

//         //         reverse(nums.begin() + i, nums.end());

//         //         break;
//         //     }
//         //     else if (i == 1) {
//         //         reverse(nums.begin(), nums.end());
//         //     }
//         // }


//         //inbulit stl for C++
//        // next_permutation(nums.begin(),nums.end());

//        int index=-1;
//        for(int i=nums.size()-2;i>=0;i--){
//         if(nums[i]<nums[i+1]){
//             index=i;
//             break;
//         }
//        }
//        for(int i=nums.size()-1;i>index;i--){
//         if(nums[i]>nums[index]){
//             swap(nums[i],nums[index]);
//             break;
//         }
//        }
//        reverse(nums.begin()+index+1,nums.end());
//     }
// };


class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        int index = -1;

        // Step 1: Find the pivot
        for (int i = nums.size() - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                index = i;
                break;
            }
        }

        // No pivot -> array is in descending order
        if (index == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Step 2: Find the smallest number greater than nums[index]
        // Since the right part is decreasing, scan from right
        for (int i = nums.size() - 1; i > index; i--) {
            if (nums[i] > nums[index]) {
                swap(nums[i], nums[index]);
                break;
            }
        }

        // Step 3: Make suffix smallest
        reverse(nums.begin() + index + 1, nums.end());
    }
};