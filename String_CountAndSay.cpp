class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
            return "1";
        string s=countAndSay(n-1);
        int i=0,p=s.size();
        string ans;
        while(i<p)
        {
            char c=s[i];
            int cnt=0;
            while(i<p && s[i]==c)
            {
                cnt++;
                i++;
            }
            ans+=(cnt+'0');
            ans+=c;
        }
        return ans;
    }
};
