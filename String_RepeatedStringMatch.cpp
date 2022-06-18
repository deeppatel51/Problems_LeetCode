class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        unordered_map<char,int>mp;
        for(auto it:a)
            mp[it]++;
        for(auto it:b)
        {  
            if(mp[it]==0)
                return -1;
        }
        int bsize=b.size();
        vector<int>pi(bsize,0);
        lps(pi,b);
        int i=0,j=0;
        while(i<a.size())
        {
            if(j<b.size() && a[(i+j)%a.size()]==b[j])
            {
                ++j;
                continue;
            }
            if(j==bsize)
                return (i+j-1)/a.size()+1;
            else j=pi[j]; 
            i++;
        }
        return -1;
    }
    void lps(vector<int>&pi,string&b)
    {
        int len=0,i=1;
        while(i<b.size())
        {
            if(b[i]==b[len])
                pi[i++]=++len;
            else
            {
                if(len)len=pi[len-1];
                else pi[i++]=0;
            }
        }
    }
};
