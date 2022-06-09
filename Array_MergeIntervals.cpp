class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& interval) {
        vector<vector<int>> interval2;
        if(interval.size()==0)
        {
            return interval2;
        }
        sort(interval.begin(),interval.end());
        interval2.push_back(interval[0]);
        int j=0;
        for(int i=1;i<interval.size();i++)
        {
            if(interval2[j][1]>=interval[i][0])
                interval2[j][1]=max(interval2[j][1],interval[i][1]);
            else
            {
                j++;
                interval2.push_back(interval[i]);
            }
        }
        return interval2;
    }
};
