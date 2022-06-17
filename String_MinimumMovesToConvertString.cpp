class Solution {
public:
    int minimumMoves(string s) {
        int res = 0;
        int it=0;
        while(it<s.length()){
            if(s[it] == 'X'){
                res++;
                it+=3;
            }
            else{it++;}
        }
        return res;
    }
};
