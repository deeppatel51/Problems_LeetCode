class Solution {
public:
    int search(vector<int>& nums, int target) {
        unordered_map<int,int>umap;
        for(int i=0;i<nums.size();i++){
            umap[i]=nums[i];
        }
        for(auto x:umap){
            if(target==x.second){
                return x.first;
            }
        }
        return -1;
    }
};
