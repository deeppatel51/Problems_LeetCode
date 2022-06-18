class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_set<string> ban;
        for(int i = 0; i<paragraph.length(); i++)
        {
            if(ispunct(paragraph[i]))
                paragraph.replace(i, 1, " ");
            paragraph[i] = tolower(paragraph[i]);
        }
        for(auto word : banned)
        {
            transform(word.begin(), word.end(), word.begin(), ::tolower);
            ban.insert(word);
        }
        stringstream ss(paragraph);
        string word = "";
        unordered_map<string, int> paraWords;
        while(ss>>word)
        {
            transform(word.begin(), word.end(), word.begin(), ::tolower);
            if(!ban.count(word))
                paraWords[word]++;
        }
        int max = INT_MIN;
        string ans;
        for(auto itr : paraWords)
            if(itr.second>max)
            {
                max = itr.second;
                ans = itr.first;
            }
        return ans;;
    }
};
