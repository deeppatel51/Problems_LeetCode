class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(),greater<int>());
        int n=nums.size();
        int count=0;
        int temp=nums[0];
        for(int i=0;i<n;i++)
        {
            if(temp>=nums[i])
            {
                count++;
            }
            temp=nums[i];
            if(count==k)
            {
                return temp;
            }
        }
        return nums[0];
    }
};
