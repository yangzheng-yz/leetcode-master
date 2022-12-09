/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        for(int ni=1;ni<nums.size();ni++)
        {
            if(nums[count]!=0)
            {
                count++;
            }
            if(nums[ni]!=0)
            {
                swap(nums[count], nums[ni]);
            }
        }
    }
};
// @lc code=end

