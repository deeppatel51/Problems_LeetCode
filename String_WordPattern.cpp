class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, int> m1;
        unordered_map<string, int> m2;
        int i = 1, k = 0;
        for (int j = 0; j < pattern.size(); j++) {
            if (k >= s.size()) {
                return false;
            }
            string tmp = "";
            for (; k < s.size(); k++) {
                if (s.at(k) == ' ') {
                    k++;
                    break;
                }
                tmp += to_string(s.at(k));
            }
            if (!m1[pattern.at(j)] && !m2[tmp]) {
                m1[pattern.at(j)] = m2[tmp] = i++;
            }
            if (m1[pattern.at(j)] != m2[tmp]) {
                return false;
            }
        }
        if (k < s.size()) {
            return false;
        }
        return true;
    }
};
