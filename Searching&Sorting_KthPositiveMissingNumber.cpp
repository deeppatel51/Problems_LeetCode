class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        set<int> s;
        int count = 0;
        for(int i = 0; i < arr.size(); i++){
            s.insert(arr[i]);
        }
        for(int i = 0; i <= arr.size() + k; i++){
            if(s.count(i) == 1){
                continue;
            }
            if(count == k){
                return i;
            }
            count++;
        }
        return -1;
        
    }
};
