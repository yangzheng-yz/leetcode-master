/*
 * @lc app=leetcode id=367 lang=cpp
 *
 * [367] Valid Perfect Square
 */

// @lc code=start
class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 0 || num == 1){
            return true;
        }
        int left = 2;
        int right = num;
        while(left<=right){
            int mid = left + ((right - left) >> 1);
            
            if(mid > float(num) / float(mid)){
                right = mid - 1;
            }
            else if(mid < float(num) / float(mid)){
                if((mid + 1) > float(num)/float((mid+1))){
                    return false;
                }
                left = mid + 1;
            }
            else{
                return true;
            }
        }
        return false;
    }
};
// @lc code=end

