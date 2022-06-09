class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int temp=0, sum=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i;j<nums.size();j++)
            {
                if(nums[i]<nums[j])
                {
                    temp=nums[j]-nums[i];
                }
                if(temp>sum)
                {
                    sum=temp;
                }
            }
        }
        if(sum==0)
        {
            return -1;
        }
        return sum;
    }
};
