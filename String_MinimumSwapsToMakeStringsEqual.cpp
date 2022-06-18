class Solution {
public:
    int minimumSwap(string s1, string s2) {
        int c1=0,c2=0;
        for(int i=0;i<s1.size();++i){
            if(s1[i]!=s2[i]){
                if(s1[i]=='x'){
                    ++c1;
                }else{
                    ++c2;
                }
            }
        }           
        if(c1%2==0 && c2%2==0){
            return (c1+c2)/2;
        }else if(c1%2==1 && c2%2==1){
            return c1/2+c2/2+2;
        }          
        return -1;
    }
};
