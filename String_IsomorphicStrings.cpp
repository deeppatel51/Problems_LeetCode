class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        map<char, char> mp;        
        for(int i = 0; i < s.length(); i++) {
            mp[s[i]] = t[i];
        }
        
        string temp1 = s;        
        for(int i = 0; i < s.length(); i++) {
            temp1[i] = mp[s[i]];
        }
        
        mp.clear();        
        for(int i = 0; i < t.length(); i++) {
            mp[t[i]] = s[i];
        }
        
        string temp2 = t;        
        for(int i = 0; i < t.length(); i++) {
            temp2[i] = mp[t[i]];
        }
        
        if((temp1 == t) && (temp2 == s)) {
            return true;
        }
        return false;
    }
};
