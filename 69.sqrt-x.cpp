/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        if(x==0){
            return 0;
        }
        int left = 1;
        int right = x;
        while(true){
            int middle = left + ((right - left) >> 1);
            if(middle > x/middle){
                right = middle - 1;
            }
            else{
                if(middle+1 > x/(middle+1)){
                    return middle;
                }
                left = middle + 1;
                }
        }
        // return left - 1;
    }
};

// @lc code=end

