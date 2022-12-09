/*
 * @lc app=leetcode id=76 lang=cpp
 *
 * [76] Minimum Window Substring
 */

// @lc code=start
class Solution {
public:
    string minWindow(string s, string t) {
        if(s.size() < t.size())
        {
            return "";
        }
        unordered_map<char, int> tmap, smap;
        int left{0};
        int correct{0};
        for(int i=0; i<t.size(); i++)
        {
            ++tmap[t[i]];
        }
        int right;
        string res = s + "very";
        for(right=0; right<s.size(); right++)
        {
            ++smap[s[right]];
            if(tmap[s[right]] >= smap[s[right]])
            {
                ++correct;
            }
            if(correct == t.size())
            {
                while(smap[s[left]] > tmap[s[left]])
                {
                    --smap[s[left++]];
                }
                if((right-left+1) < res.size())
                {
                    res = s.substr(left, right-left+1);
                }
            }
        }
        if(res.size() == 0 && correct != t.size())
        {
            return "";
        }
        return res == (s+"very") ? "" : res;
    }
};
// @lc code=end

