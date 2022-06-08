class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3;
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                {
                    nums3.push_back(nums1[i]);
                }
            }
        }
        sort(nums3.begin(),nums3.end());
        vector<int> nums4;
        if(nums3.size()==0)
        {
            return nums3;
        }
        nums4.push_back(nums3[0]);
        for(int i=0;i<nums3.size()-1;i++)
        {
            if(nums3[i]!=nums3[i+1])
            {
                nums4.push_back(nums3[i+1]);
            }
        }
        return nums4;
    }
};
