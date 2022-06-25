class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int,int> temp;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            temp[nums[i]]++;
        }
        for(auto i : temp)
        {
            if(i.second == 1)
                sum += i.first;
        }
        return sum;
    }
};
