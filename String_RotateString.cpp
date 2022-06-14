class Solution {
public:
    bool rotateString(string s, string goal) {
        int k=10;
        for(int i=0; i<s.size();i++)
        {
            rotate(s.begin(), s.begin() + 1, s.end());
            k=s.compare(goal);
            if(k==0)
            {
                return true;
            }
        }
        return false;
        
    }
};
