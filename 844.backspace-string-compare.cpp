/*
 * @lc app=leetcode id=844 lang=cpp
 *
 * [844] Backspace String Compare
 */

// @lc code=start
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int count_s = 0;
        int count_t = 0;
        bool button = false;
        for(int ni=0; ni<s.size();ni++)
        {
            if(ni == 0 && s[ni] == '#')
            {
                button = true;
                continue;
            }
            if(button == false && s[ni] == '#')
            {
                count_s = ni - 1;
                button = true;
                continue;
            }
            if(button == true && s[ni] != '#')
            {
                swap(s[count_s], s[ni]);
                count_s++;
            }
            else if(button == true && s[ni] == '#')
            {
                if(count_s != 0)
                    count_s--;
            }
        }
        if(button == false)
        {
            count_s = s.size();
        }
        button = false;

        for(int nj=0; nj<t.size(); nj++)
        {
            if(nj == 0 && t[nj] == '#')
            {
                button = true;
                continue;
            }
            if(button == false && t[nj] == '#')
            {
                count_t = nj - 1;
                button = true;
                continue;
            }
            if(button == true && t[nj] != '#')
            {
                swap(t[count_t], t[nj]);
                count_t++;
                
            }
            else if(button == true && t[nj] == '#')
            {
                if(count_t != 0)
                    count_t--;
            }
        }
        if(button == false)
        {
            count_t = t.size();
        }
        if(count_t != count_s)
        {
            return false;
        }
        else{
            for(int nk=0; nk<count_s; nk++)
            {
                if(s[nk] != t[nk])
                {
                    return false;
                }
            } 
            return true;
        }

    }
};
// @lc code=end

