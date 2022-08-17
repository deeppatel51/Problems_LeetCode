class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> combos;
        vector<string> letters;
        unordered_map<char,string> pMap;
        string combo = "";

        pMap['2'] = "abc";
        pMap['3'] = "def";
        pMap['4'] = "ghi";
        pMap['5'] = "jkl";
        pMap['6'] = "mno";
        pMap['7'] = "pqrs";
        pMap['8'] = "tuv";
        pMap['9'] = "wxyz";
        
        for (auto dig : digits)
            letters.push_back(pMap[dig]);
        
        if (letters.size() > 0)
            makeCombo(combos,combo,letters,0);
        
        return combos;
    }
    
    void makeCombo(vector<string> &combos, string &combo, vector<string> &letters, int index) {
        if (index == letters.size())
            combos.push_back(combo);
        else {
            for (int i = 0; i < letters[index].size(); i++) {
                combo.push_back(letters[index][i]);
                makeCombo(combos,combo,letters,index+1);
                combo.pop_back();
            }
        }
    }
};
