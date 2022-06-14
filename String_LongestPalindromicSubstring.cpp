class Solution {
public:
    string longestPalindrome(string s) {
        string res="";
        int maxLength=1,start=0,length=0;
        for(int i=0;i<s.length();i++){
            int low=i-1;
            int high=i+1;
            while(high<s.length() && s[i]==s[high]){
                high++;
            }
            while(low>=0 && s[i]==s[low]){
                low--;
            }
            while(high<s.length() && low>=0 && s[low]==s[high]){
                high++;
                low--;
            }
            length=high-low-1;
            if(maxLength<length){
                maxLength=length;
                start=low+1;
            }
        }
        for(int i=start;i<maxLength+start;i++){
            res+=s[i];
        }
        return res;
        
    }
};
