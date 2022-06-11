class Solution {
public:
    int clumsy(int n) {
        if(n==1)
            return 1;
        if(n==2)
            return 2;
        if(n==3)
            return 6;
        int ans=(n*(n-1))/(n-2)+n-3;
        n-=4;
        while(n)
        {
            if(n>3)
            {
                ans-=(n*(n-1))/(n-2);
                ans+=n-3;
                n=n-4;
            }
            else
                break;
        }
        if(n==1)
            return ans-1;
        else if(n==2)
            return ans-2;
        else if(n==3)
            return ans-6;
        
        return ans;
    }
};
