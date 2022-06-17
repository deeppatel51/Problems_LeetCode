class Solution {
public:
    map<string, bool> m;
    bool wordBreak(string s, vector<string>& wordDict) {
        if(find(wordDict.begin(),wordDict.end(),s)!=wordDict.end()){
            return true;
        }
        if(m.find(s)!=m.end())
            return m[s];
        string temp="";
        for(int i=0;i<s.length();i++){
            temp+=s[i];
            if(find(wordDict.begin(),wordDict.end(),temp)!=wordDict.end() && wordBreak(s.substr(i+1),wordDict)){
                m[s]=true;
                return true;
            }
        }
        m[s]=false;
        return false;
    }
};
