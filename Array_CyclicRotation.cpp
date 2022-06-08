class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> nums2;
        int n = nums.size();
        if(k>n)
        {
            k=k%n;
        }
        for(int i=n-k;i<n;i++)
        {
            nums2.push_back(nums[i]);
        }
        for(int i=0;i<n-k;i++)
        {
            nums2.push_back(nums[i]);
        }
        nums=nums2;
    }
};
