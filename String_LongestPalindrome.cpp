class Solution {
public:
	int longestPalindrome(string s) {
		if(s.size()==1)return 1;
		map<char,int>mp;
		int max=0;
		int count=0;
		for(int i=0;i<s.size();i++) mp[s[i]]++;
		for(auto i: mp){
			if(i.second%2==0)max+=i.second;
			else{
				max+=2*(i.second/2);
				count++;
			}    
		}
		if(count>0)max++;
		return max;
	}
};
