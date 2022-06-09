class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int tempsum=0;
        int sum=0;
        for(int i=0; i<nums.size();i++)
        {
            tempsum=tempsum+nums[i];
            if(tempsum<0)
            {
                tempsum=0;
            }
            if(tempsum>sum)
            {
                sum=tempsum;
            }
        }
        if(sum==0)
        {
            sort(nums.begin(),nums.end());
            return nums[nums.size()-1];
        }
        return sum;
    }
};
