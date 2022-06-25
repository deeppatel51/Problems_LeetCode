class Solution {
public:
    
    bool search(int i,int j,vector<vector<bool>> &vis,string &word,vector<vector<char>>& board,int ind,int n,int m){
        if(ind==word.size()){
            return true;
        }
        if(i<0 || j<0 || i>=n || j>=m || vis[i][j] || word[ind]!=board[i][j])return false;
        
        vis[i][j]=true;
        if(search(i+1,j,vis,word,board,ind+1,n,m) || search(i-1,j,vis,word,board,ind+1,n,m) || search(i,j+1,vis,word,board,ind+1,n,m) || search(i,j-1,vis,word,board,ind+1,n,m))return true;
        vis[i][j]=false;
        return false;
        
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<bool>> vis(n,vector<bool>(m,false));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0]){
                    if(search(i,j,vis,word,board,0,n,m))return true;
                }
            }
        }
        return false;
    }
};
