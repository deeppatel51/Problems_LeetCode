class Solution {
public:
    
    bool isValid(vector<int> &v,int mid,int n){
        
        
       for(int i=0;i<v.size();i++){
           n-=(ceil(v[i]/(mid*1.0)));
           if(n<0) return false;
       }
        return true;
    }
    
    int minimizedMaximum(int n, vector<int>& quantities){
        
        int mn=1,mx=1e5;
        
        while(mn<=mx){
            int mid=(mx+mn)/2;   
            if(isValid(quantities,mid,n)) mx=mid-1;
            else mn=mid+1;
        }
        return mn;
    }
};
