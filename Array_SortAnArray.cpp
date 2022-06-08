class Solution {
public:
    int partition(vector<int> &nums, int l, int h)
    {
        int p=nums[l];
        int i=l;
        int j=h;
        while(i<j)
        {
            do
            {
                i++;
            }while(nums[i]<=p);
            do
            {
                j--;
            }while(nums[j]>p);
            if(i<j)
            {
                swap(nums[i],nums[j]);
            }
        }swap(nums[l],nums[j]);
        return j;
    }
    vector<int> quickSort(vector<int> &nums, int l, int h)
    {
        if(l<h)
        {
            int j = partition(nums, l, h);
            quickSort(nums, l,j);
            quickSort(nums, j+1,h);
        }
        return nums;
    }
    vector<int> sortArray(vector<int>& nums) {
        nums.push_back(60000);
        nums = quickSort(nums, 0,nums.size()-1);
        nums.pop_back();
        return nums;
    }
        
};
