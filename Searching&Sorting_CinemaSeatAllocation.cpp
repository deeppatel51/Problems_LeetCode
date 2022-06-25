class Solution {
public:
    
    static bool cmp(vector<int> &a,vector<int> &b){
        if (a[0]==b[0]){
            return a[1]<b[1];
        }
        else{
            return a[0]<b[0];
        }
    }
    
    int maxNumberOfFamilies(int n, vector<vector<int>>& v) {
        sort(v.begin(),v.end(),cmp);
        int i;
        int ans=2*n;
        map<int,vector<int>> mp;
        
        for (i=0; i<v.size(); i++){
            mp[v[i][0]].push_back(v[i][1]);
        }
        
        for (auto it: mp){
            if (it.second.size()==0){
                continue;
            }
           vector<int> temp=it.second;
           auto it1=lower_bound(temp.begin(),temp.end(),2);
           auto it2=lower_bound(temp.begin(),temp.end(),4);
           auto it3=lower_bound(temp.begin(),temp.end(),6);
            
           bool flag=false,key=false;
           if (it1==temp.end())  {
               flag=true;
           }
           else if (*it1-2>=4){
               flag=true;
           }
           
            if (it3==temp.end()){
                key=true;
            }
            else if (*it3-6>=4){
                key=true;
            }
            
            
            if (!flag && !key){
                if (it2==temp.end()){
                    ans--;
                    continue;
                }
                else if (*it2-4>=4){
                    ans--;
                    continue;
                } 
            }
            
            if (!flag){
                ans--;
            }
            if (!key){
                ans--;
            }
        }
        
     return ans;
    }
};
