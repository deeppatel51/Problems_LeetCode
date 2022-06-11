class Solution {
public:
    int maxProduct(vector<int>& nums) {
    int n = nums.size();
    int ans = INT_MIN;
    int pro = 1;
    for(int i = 0 ; i < n ; i++){
        if(nums[i]){
            pro *= nums[i];
            ans = max(ans,pro);
        }
        else{
            pro = 1;
            ans = max(ans,0);
        }
        
    }
    pro = 1;
    for(int i = n-1 ; i >= 0 ; i--){
        if(nums[i]){
            pro *= nums[i];
            ans = max(ans,pro);
        }else{
            pro = 1;
            ans = max(ans,0);
        }
    }
    return ans;
}
};
