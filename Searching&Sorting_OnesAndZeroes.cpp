class Solution {
public:
    vector<vector<vector<int>>> dp;
    
    int helper(vector<string>&str, int m, int n, int pos){
        if(pos == str.size()) return 0;
        if(dp[pos][m][n] != -1) return dp[pos][m][n];
        int ones = count(str[pos].begin(), str[pos].end(), '1');
        int zeros = str[pos].size()-ones;
        if(ones<=n and zeros<=m)
            return dp[pos][m][n] = max(helper(str,m-zeros, n-ones,pos+1)+1, helper(str,m,n,pos+1));
        return dp[pos][m][n] = helper(str,m,n,pos+1);
    }
    
    int findMaxForm(vector<string>& strs, int m, int n) {
        dp.resize(strs.size(), vector<vector<int>>(m+1, vector<int>(n+1, -1)));
        return helper(strs,m,n,0);
    }
};
