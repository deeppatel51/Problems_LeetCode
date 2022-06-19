class Solution {
public:
    
    int helper(string s, int i, int j){
        if(i>=j){

            return 0;
        }
        if(s[i]==s[j]){
            return helper(s,i+1,j-1);
        }
        int k = i;
        while(k<j){
            if(s[k]==s[j]){
                break;A
            }
            k++;
        }
        int diff1 = k - i;
       int k2 = j;
        while(k2>=i){
            if(s[k2]==s[i]){
                break;
            }
            k2--;
        }
        int diff2 = j - k2;
    if(diff1>diff2){
      
        while(k2<j){
            swap(s[k2],s[k2+1]);
            k2++;
        }
        return diff2 + helper(s,i+1,j-1);
    }
        else{
            
           while(k>i){
               swap(s[k],s[k-1]);
               k--;
           }
            return diff1+helper(s,i+1,j-1);
        }
         return -1;
    }
    
    int minMovesToMakePalindrome(string s) {
        return helper(s,0,s.length()-1);
    }
};
