class Solution {
public:
    bool isIdealPermutation(vector<int>& nums) {
        int n=nums.size();
        int mx=0;
        for(int i=0;i<n-2;i++)
        {
            mx=max(nums[i],mx);
            if(mx>nums[i+2])
            return false;
            
        }
        return true;
        
    }
};
