class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int> temp;
        vector<int> temp2;
        for(int i=0;i<grid.size();i++)
        {
            for (int j=0;j<grid[0].size();j++)
            {
                temp.push_back(grid[i][j]);
            }
        }
        k=k%(grid.size()*grid[0].size());
        for(int i=temp.size()-k;i<temp.size();i++)
        {
            temp2.push_back(temp[i]);
        }
        for(int i=0;i<temp.size()-k;i++)
        {
            temp2.push_back(temp[i]);
        }
        int l=0;
        for(int i=0;i<grid.size();i++)
        {
            for (int j=0;j<grid[0].size();j++)
            {
                grid[i][j]=temp2[l];
                l++;
            }
        }
        return grid;
    }
};
