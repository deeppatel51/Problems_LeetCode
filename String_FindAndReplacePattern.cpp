class Solution {
public:
    
    bool match(string pattern, string word)
    {
        map<char, char> m;
        int seen[26] = {0};
            
        for(int j=0; j<word.length(); j++)
        {
            if(m.find(pattern[j]) == m.end() and !seen[word[j]-'a']) 
                m[pattern[j]] = word[j], seen[word[j]-'a'] = 1;
            else if(m[pattern[j]] != word[j] ) return false;
        }
        return true;
    }
    
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) 
    {
        vector<string> ans;
        
        for(int i=0; i<words.size(); i++)
            if(match(pattern, words[i])) ans.push_back(words[i]);

        return ans;
    }
};
