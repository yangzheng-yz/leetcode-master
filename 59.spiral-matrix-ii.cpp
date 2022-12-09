/*
 * @lc app=leetcode id=59 lang=cpp
 *
 * [59] Spiral Matrix II
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n, vector<int>(n, 0));
        int loop;
        bool odd{false};
        if(n % 2 == 1)
        {
            loop = n / 2 + 1;
            odd = true;
        }
        else
        {
            loop = n / 2;
        }
        int v{0};
        int u{0};
        int value{0};
        while(loop)
        {
            // right
            for(int step=0; step<=loop; step++)
            {
                v += 1;
                res[u][v] = value++;
            }
            // down
            for(int step=0; step<=loop; step++)
            {
                u += 1;
                res[u][v] = value++;
            }
            // left
            for(int step=0; step<=loop; step++)
            {
                v -= 1;
                res[u][v] = value++;
            }
            // up
            for(int step=0; step<
            
            loop; step++)
            {
                u -= 1;
                res[u][v] = value++;
            }
            loop--;
        }
        return res;

    }
};
// @lc code=end

