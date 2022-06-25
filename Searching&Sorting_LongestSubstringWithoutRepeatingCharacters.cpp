class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> included;
        
        int l = 0, r = 0, max_len = 0;
        while(r < s.size())
        {
            if(included.count(s[r]) > 0)
            {
                if(included[s[r]] >= l)
                    l = included[s[r]] + 1;
            }
            
            included[s[r]] = r;
            max_len = max(max_len, r - l + 1);
            r += 1;
        }
        
        return max_len;
    }
};
