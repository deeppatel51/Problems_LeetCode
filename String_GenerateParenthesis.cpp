class Solution {
public:
    void balancedParenthsis(int n, int open, int close, string str, vector<string> &ans)
    {
        if(open == n && close == n)
            ans.push_back(str);
        if(open < n)
            balancedParenthsis(n, open+1, close, str + "(", ans);
        if(close < open)
            balancedParenthsis(n, open, close+1, str + ")", ans);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string str = "";
        balancedParenthsis(n, 0, 0, str, ans);
        return ans;
    }
};
