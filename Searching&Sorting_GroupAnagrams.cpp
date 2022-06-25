class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        
        map<vector<int>, vector<string>> map;
        
        for(auto word : strs)
        {
            vector<int> count(26);
            for(auto ch : word)
                count[ch - 'a'] += 1;
            map[count].push_back(word);
        }
        for(auto it : map)
            ans.push_back(it.second); 
        return ans;
    }
};
