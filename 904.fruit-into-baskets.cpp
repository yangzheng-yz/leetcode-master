/*
 * @lc app=leetcode id=904 lang=cpp
 *
 * [904] Fruit Into Baskets
 */

// @lc code=start
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        if(fruits.size() <= 2)
        {
            return fruits.size();
        }
        int p = 0;
        int res = 0;
        int c1 = fruits[0];
        int c2 = -1;
        for(int i=1; i<fruits.size();i++)
        {
            if(fruits[i]!=c1 && c2 == -1)
            {
                c2 = fruits[i];
                res = i - p + 1;
            }
            else if(fruits[i]!=c1 && fruits[i]!=c2)
            {
                c1 = fruits[i-1];
                c2 = fruits[i];
                p = i-1;
                while(fruits[p] == c1 || fruits[p] == c2)
                {
                    p--;
                }
                p++;
                res = res > (i - p + 1) ? res : (i - p + 1);
            }
            else{
                res = res > (i - p + 1) ? res : (i - p + 1);
            }
        }
        return res;
    }
};
// @lc code=end

