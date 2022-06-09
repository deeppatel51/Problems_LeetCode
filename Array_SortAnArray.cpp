class Solution {
public:
    int partition(vector<int>& nums, int l, int h)
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
    void quickSort(vector<int>& nums, int l, int h)
    {
        if(l<h)
        {
            int j = partition(nums, l, h);
            quickSort(nums, l,j);
            quickSort(nums, j+1,h);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        bool flag=false;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                flag=true;
                break;
            }
        }
        if(flag)
        {
        nums.push_back(INT_MAX);
        quickSort(nums, 0,nums.size()-1);
        nums.pop_back();
        }
        return nums;
    }     
};
