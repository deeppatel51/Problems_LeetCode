class Solution {
    int mod=1000000007;
    long power(int a,long b)
    {
        if(b==0)
            return 1;
        long prev=power(a,b>>1)%mod;
        long ans=(prev*prev)%mod;
        if(b&1)
            return (ans*a)%mod;
        return ans;
    }
public:
    int minNonZeroProduct(int p) {
        long max=power(2,p)-1;
        long toPower=1L<<(p-1);
        
        long ans=power(max-1,toPower-1);
        ans=((ans%mod)*(max%mod))%mod;
        return ans;
    }
};
