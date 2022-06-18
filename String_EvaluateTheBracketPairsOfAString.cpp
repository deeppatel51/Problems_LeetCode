class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
    map<string, string> mp;
    int index = 0;
    while(index < s.size()){
        string tmp = "";
        if(s[index] == '('){
            index++;
            while(s[index] != ')'){
                tmp += s[index];
                index++;
            }
        }
        if(tmp.size() >= 1) mp[tmp] = "?";
        index++;
    }
    for(vector<string> x : knowledge){
        mp[x[0]] = x[1];
    }
    string answer = "";
    
    for (int i = 0; i < s.size();)
    {
        if(s[i] != '('){
            answer += s[i];
            i++;
        }else{
            i++;
            string tmp = "";
            while(s[i] != ')'){
                tmp += s[i];
                i++;
            }
            i++;
            answer += mp[tmp];
        }
    }
    return answer;  
}
};
