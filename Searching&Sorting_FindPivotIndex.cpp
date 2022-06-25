class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>sums;
        int sum=0,pivot=-1;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            sums.push_back(sum);
        }
        for(int i=0;i<nums.size();i++)
        {
            if(sum-nums[i]==(sums[i]-nums[i])*2)
            {
                pivot=i;
                break;
            }
        }
        return pivot;
    }
};
