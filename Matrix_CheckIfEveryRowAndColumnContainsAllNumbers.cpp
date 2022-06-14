class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();
		
        vector<vector<int>> used1(n,vector<int>(n,0));
        vector<vector<int>> used2(n,vector<int>(n,0));
		
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int num = matrix[i][j]-1;
				
                if(used1[i][num] || used2[j][num]){
                    return false;
                }
                used1[i][num] = used2[j][num] = 1;
            }
        }
        return true;
    }
};
