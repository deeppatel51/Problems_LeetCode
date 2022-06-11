class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int maximum = 0, i;
        
        for(i = 0; i < arr1.size(); i++){
            maximum = max(maximum, arr1[i]); 
        }
        vector<int> count(maximum+1, 0);
        for(i = 0; i < arr1.size(); i++){
            count[arr1[i]]++;
        }
        
        int k = 0;
        for(i = 0; i < arr2.size(); i++){
            while(count[arr2[i]] > 0){
                arr1[k] = arr2[i];
                count[arr2[i]]--;
                k++;
            }                
        } 
        for(int j = 0; j < maximum+1; j++){
            while(count[j] > 0){
                arr1[k] = j;
                count[j]--;
                k++;
            }
        }
        return arr1;
    }
};
