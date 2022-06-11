class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int temp=1,count=1;
        if(nums.size()==0)
            return 0;
        if(nums.size()==1)
            return 1;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i+1]==(nums[i]+1))
            {
                temp++;
                if(temp>count)
                {
                    count=temp;
                }
            }
            else if (nums[i+1]==nums[i])
                temp=temp;
            else
                temp=1;
        }
        return count;
    }
};
