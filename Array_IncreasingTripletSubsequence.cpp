class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int less1=INT_MAX;
        int less2=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=less1){
                less1=nums[i];
            }else if(nums[i]<=less2){
                less2=nums[i];
            }else{
                return true;
            }
        }
        return false;
    }
};
