class Solution {
public:
    string optimalDivision(vector<int>& nums){
        int n = nums.size();
        if (n == 0) {
            return "";
        }
        if (n == 1) {
            return to_string(nums[0]);
        }
        if (n == 2) {
            return to_string(nums[0]) + "/" + to_string(nums[1]);
        }
        string ans = to_string(nums[0]);
        ans += '/';
        ans += '(';
        ans.append(to_string(nums[1]));
        for (int i = 2; i < n; ++i) {
            ans += '/';
            ans.append(to_string(nums[i]));
        }
        ans += ')';
        return ans;
    }
};
