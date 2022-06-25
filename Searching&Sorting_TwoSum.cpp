class Solution {
  public:
    vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> ans;   
    map<int,int> m; 
    map<int,int>::iterator it;
   
    for(int i=0; i<nums.size();i++){ 
      it=m.find(target-nums[i]); 
      if(it!=m.end()){  
        ans.push_back((*it).second);   
        ans.push_back(i);
        return ans;
      }
      else
        m[nums[i]]=i;  
    }
    return ans;
  }
};
