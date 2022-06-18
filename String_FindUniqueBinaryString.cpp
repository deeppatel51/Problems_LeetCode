class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string s(nums.size() ,'0');
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i][i]=='0')
                s[i] = '1';
            else
                s[i] = '0';
        }
        return s;
    }
};
