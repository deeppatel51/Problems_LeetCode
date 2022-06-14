class Solution {
public:
    string reformat(string s) {
        stack<char> letter;
        stack<char> no;
        string ans = "";
        for(int i=0;i<s.length();i++){
            if(isdigit(s[i])){
                no.push(s[i]);
            }else{
                letter.push(s[i]);
            }
        }
        if(no.size() == letter.size() || letter.size() == no.size()+1){
            while(!letter.empty()){
                ans += letter.top();
                if(!no.empty())
                ans += no.top();
                letter.pop();
                no.pop();
            }
            return ans;
        }else if(no.size() == letter.size()+1){
            while(!no.empty()){
                ans += no.top();
                if(!letter.empty())
                ans += letter.top();
                letter.pop();
                no.pop();
            }
            return ans;
        }else{
            return "";
        }
    }
};
