class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
	    int buy = INT_MAX, sell, ans=0;
	    for(int i=0; i<prices.size(); i++)
        {
		    buy = min(buy, prices[i]);
		    sell = prices[i]-buy;
		    ans = max(sell, ans);
	    }
	    return ans;
    }
};
