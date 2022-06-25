class Solution {
public:
    int search(vector<int>& nums, int target) {
        int index = -1;
        int mid = nums.size() / 2;
        
        if (target >= nums[mid]){
            for (int i = mid; i < nums.size(); i++){
                if (target == nums[i])
                    index = i;
            }
        }
        else {
            for (int i = 0; i < mid; i++){
                if (target == nums[i])
                    index = i;
            }
        }
        
        return index;
    }
};
