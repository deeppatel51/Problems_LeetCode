class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> nums2;
        int count=0;
        for (int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                count++;
            else
                nums2.push_back(nums[i]);
        }
        while(count!=0)
        {
            nums2.push_back(0);
            count--;
        }
        nums=nums2;
    }
};
