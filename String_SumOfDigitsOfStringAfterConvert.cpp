class Solution {
public:
    
    int getLucky(string s, int k) {
        int n=s.length(),sum;
       string str="";
        for(int i=0;i<n;i++)
        {
            int ch=s[i]-96;
            str+=to_string(ch);
        }
        while(k--){
            sum=0;
        for(int i=0;i<str.length();i++){
            sum+=(str[i]-'0');
            }
            str=to_string(sum);
        }
        return sum;
    }
};
