/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.empty()){
            return 0;
        }
        int count = 0;
        int i = 0;
        while((i+count) != nums.size()){
            if(nums[i] == val){
                ++count;
                swap(nums[i], nums[nums.size()-count]);
            }
            else{
                ++i;
            }
        }
        return nums.size()-count;
    }
};
// @lc code=end

