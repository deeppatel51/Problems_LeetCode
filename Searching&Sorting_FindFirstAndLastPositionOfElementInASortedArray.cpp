class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>num(2,-1);
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                count++;
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target && count==1)
            {
                num[0]=i;
                num[1]=i;
            }
        }
        
        for(int s=0;s<nums.size();s++)
        {
            if(nums[s]==target && count>=2)
            {
               num[0]=s;
                break;
            }
        }
        for(int end=num[0]+1;end<nums.size();end++)
        {
            if(nums[end]==target && count>=2)
            {
            num[1]=end;
             
            }
        }
        
        
        return num;
        
    }
};
