class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int> m;
        for(auto x:s){
            m[x]++;
        }
        string ans="";
        for(int i=0;i<order.size();i++){
            if(m.count(order[i])){
                while(m[order[i]]--){
                    ans+=order[i];
                }
                m.erase(order[i]);
            }
        }
        for(auto x:m){
            while(x.second--){
                ans+=x.first;
            }
        }
        return ans;
    }
};
