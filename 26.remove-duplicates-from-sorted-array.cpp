/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0;
        for(int ni=1; ni<nums.size();ni++)
        {
            if(nums[ni] != nums[count])
            {
                nums[++count] = nums[ni];
            }
        }
        return count+1;
    }
};
// @lc code=end

