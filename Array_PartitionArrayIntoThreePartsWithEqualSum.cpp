class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum = accumulate(arr.begin(), arr.end(), 0), cnt = 0, partSum=0;
        if(sum%3)
            return false;
        for(int i=0; i<arr.size(); i++)
        {
            partSum += arr[i];
            if(partSum == sum/3)
            {
                if(++cnt == 3)
                    return true;
                partSum = 0;
            }
        }
        return false;
    }
};
