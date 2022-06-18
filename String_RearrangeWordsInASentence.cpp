class Solution {
public:
    string arrangeWords(string text) {
        map<int,string> mp;
        string st="";
        for(int i=0;i<text.size();i++){
            if(text[i]==' ')
            {
                if(mp.find(st.size())==mp.end())
                    mp[st.size()]=st;
                else{
                    mp[st.size()]+=' ';
                    mp[st.size()]+=st;
                }
                st="";
            }
            else
                st+=text[i];
        }
        if(mp.find(st.size())==mp.end())
                    mp[st.size()]=st;
                else{
                    mp[st.size()]+=' ';
                    mp[st.size()]+=st;
                }
        string res;
        int flag=0;
        for(auto it:mp){
            if(flag==0){
                it.second[0]=toupper(it.second[0]);
                flag=1;
            }
            else
               it.second[0]=tolower(it.second[0]); 
            res+=it.second;
            res+=" ";
        }
        res.pop_back();
        return res;
    }
};
