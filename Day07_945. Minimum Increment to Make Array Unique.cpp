// 14-06-2024
// Leetcode POTD
// 945. Minimum Increment to Make Array Unique

// CODE:

class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans = 0;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]<=nums[i-1]){
                int temp = nums[i];
                nums[i] = nums[i-1]+1;
                ans += nums[i]-temp;
            }
        }
        return ans;
    }
};
