/*
 * @lc app=leetcode id=209 lang=cpp
 *
 * [209] Minimum Size Subarray Sum
 */

// @lc code=start
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int cnt = 0;
        int sum = 0;
        int res = nums.size() + 1;
        for(int i=0; i<nums.size(); i++)
        {
            sum += nums[i];
            while(sum>=target)
            {
                int sublen = i - cnt + 1;
                res = res < sublen ? res : sublen;
                sum -=nums[cnt++];
            }
        }
        return res == (nums.size() + 1) ? 0 : res;
    }
};
// @lc code=end

