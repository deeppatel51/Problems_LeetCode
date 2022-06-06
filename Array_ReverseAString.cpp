class Solution {
public:
    void reverseString(vector<char>& s) {
        int j = s.size()-1;
        char temp='A';
        for (int i=0; i<j; i++)
        {
            temp=s[i];
            s[i]=s[j];
            s[j]=temp;
            j--;
        }
        return;
    }
};
