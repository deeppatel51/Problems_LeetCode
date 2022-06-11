class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        if(n%2==0)
        {
            for(int i=0;i<n;i=i+2)
            {
                ans.push_back(i+1);
                ans.push_back(-(i+1));
            }
        }
        if(n%2==1)
        {
            for(int i=0;i<n-1;i=i+2)
            {
                ans.push_back(i+1);
                ans.push_back(-(i+1));
            }
            ans.push_back(0);
        }
        return ans;
    }
};
