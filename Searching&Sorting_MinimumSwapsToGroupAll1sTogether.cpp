class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int totalOnes = 0, n = nums.size(), mxOne = 0, i = 0, winOne = 0;
        for(auto it : nums) if(it) ++totalOnes;
        for(int j=0; j<2*n; ++j) {
            if(nums[j%n] == 1) winOne++;
            if(j-i+1 == totalOnes) {
                mxOne = max(mxOne, winOne);
                if(nums[i%n] == 1) winOne--;
                i++;
            }
        }
        return totalOnes - mxOne;
    }
};
