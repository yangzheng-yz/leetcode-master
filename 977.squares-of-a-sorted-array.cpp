/*
 * @lc app=leetcode id=977 lang=cpp
 *
 * [977] Squares of a Sorted Array
 */

// @lc code=start
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int count_back = nums.size() - 1;
        int count_forward = 0;
        int count_res = count_back;
        vector<int> res(nums.size());
        while(count_res >= 0)
        {
            if(nums[count_back]*nums[count_back] <= nums[count_forward]*nums[count_forward])
            {
                res[count_res--] = nums[count_forward]*nums[count_forward];
                count_forward++;
            }
            else
            {
                res[count_res--] = nums[count_back]*nums[count_back];
                count_back--;
            }
        }
        return res;
    }
};
// @lc code=end

