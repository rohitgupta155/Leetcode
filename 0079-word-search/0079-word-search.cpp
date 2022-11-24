class Solution {
public:
    
    bool exist(vector<vector<char>>& board, string word) {
        int r=board.size();
        int c=board[0].size();
        bool ans=false;
        vector<vector<bool>>vis(r,vector<bool>(c,false));
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                helper(board,word,vis,ans,i,j,0);
                if(ans)return true;
            }
        }
        return false;   
    }
     void helper(vector<vector<char>>& board, string &word, vector<vector<bool>>&vis, bool &ans, int i, int j, int index){
        if(i<0 || j<0 || i>=board.size() || j>=board[0].size() || word[index]!=board[i][j] || ans || vis[i][j])return;

        if(index==word.length()-1){
            ans=true;
            return;
        }

        vis[i][j]=true;
        helper(board,word,vis,ans,i+1,j,index+1);
        helper(board,word,vis,ans,i-1,j,index+1);
        helper(board,word,vis,ans,i,j+1,index+1);
        helper(board,word,vis,ans,i,j-1,index+1);
        vis[i][j]=false;
     }

};