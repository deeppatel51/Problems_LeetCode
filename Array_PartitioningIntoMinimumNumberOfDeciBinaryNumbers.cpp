class Solution {
public:
    int minPartitions(string n) {
        int ans=0;
        int temp;
        char c;
        for(int i=0;i<n.size();i++)
        {
            c=n[i];
            temp=c-'0';
            if(temp>ans)
                ans=temp;
        }
        return ans;
    }
};
