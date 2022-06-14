class Solution {
public:
    int countBinarySubstrings(string s) {
        int prev = 0;
        int curr = 1;
        int count = 0;
        for (int c = 1; c < s.length(); c++) {
            if (s[c] != s[c-1]) {
                count += min(curr, prev);
                prev = curr;
                curr = 1;
            } else {
                curr++;
            }
        }
        count += min(curr, prev);
        return count;
    }
};
