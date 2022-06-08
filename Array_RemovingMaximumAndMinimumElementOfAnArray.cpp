class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mn=0,mx=0;
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]>nums[mx]) mx=i;
            else if(nums[i]<nums[mn]) mn=i;
        }
        int i=min(mn,mx);
        int j=max(mn,mx);
        return min(i+1+n-j,min(n-i,j+1));
    }
};
