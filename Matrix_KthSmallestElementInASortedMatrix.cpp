class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) 
    {
        vector<int> ans;
        int n=matrix.size();
        int m=matrix[0].size();
        int count=0;
        int temp=0;
        for (int i=0; i<n;i++)
        {
            for (int j=0; j<m; j++)
            {
                ans.push_back(matrix[i][j]);
            }
        }
        sort(ans.begin(),ans.end());
        for (int i=0; i<ans.size();i++)
        {
            count++;
            if(count==k)
            {
                temp=ans[i];
            }
        }
        return temp;
    }
};
