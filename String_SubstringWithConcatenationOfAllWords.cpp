class Solution {
public:
    
    int wlen, substringSize;
    unordered_map<string, int> wordsMap;
    vector<int> ans;
    
    void solve(string& s, int l)
    {
        unordered_map<string, int> m;

        for (int r = l; r <= s.size() - wlen; r += wlen)
        {
            auto str = s.substr(r, wlen);
            if (wordsMap.find(str) == end(wordsMap))
            {
                m.clear();
                l = r + wlen;
                continue;
            }
            
            m[str]++;
            while (m[str] > wordsMap[str])
                m[s.substr(l, wlen)]--, l += wlen;
            
            if (r - l + wlen == substringSize)
                ans.push_back(l);
        }
        
        return;
    }
    vector<int> findSubstring(string s, vector<string>& words) {
        wlen = words[0].size();
        substringSize = wlen * words.size();
        
        if (wlen > s.size())
            return ans;
        
        for (auto& w : words)
            wordsMap[w]++;
    
        for (int i = 0; i < wlen; ++i)
           solve(s,i);
        
        return ans;
    }
};
