class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> nums2;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                nums2.push_back(nums[i]);
            }
        }
        return nums2;
    }
};
