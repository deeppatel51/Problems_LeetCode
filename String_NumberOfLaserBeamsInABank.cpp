class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int sum=0, count=0;
        string temp="";
        vector<int> ans;
        for(int i=0;i<bank.size();i++)
        {
            for(int j=0;j<bank[0].size();j++)
            {
                temp=bank[i];
                if(temp[j]=='1')
                {
                    count++;
                }
            }
            if(count!=0)
                ans.push_back(count);
            count=0;
            temp="";
        }
        if(ans.size()==0)
            return 0;
        for(int i=0;i<ans.size()-1;i++)
        {
            sum=sum+ans[i]*ans[i+1];
        }
        return sum;
    }
};
