class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int b=1;
        for(int i=0;i<9;i++){
            map<int,int>mp;
            int br=0;
            for(int j=0;j<9;j++){
                if(board[i][j]>='1' && board[i][j]<='9'){
                    mp[board[i][j]-'0']++;
                    if(mp[board[i][j]-'0']>1){
                        return false;
                    }
                }
            }
        }
        for(int i=0;i<9;i++){
            map<int,int>mp;
            for(int j=0;j<9;j++){
                if(board[j][i]>='1' && board[j][i]<='9'){
                    mp[board[j][i]-'0']++;
                    if(mp[board[j][i]-'0']>1){
                        return false;
                    }
                }
            }
        }
        for(int i=0;i<9;i++){
            map<int,int>mp;
            for(int j=0;j<3;j++){
                for(int k=0;k<3;k++){
                    int r=(i/3)*3+j,c=(i%3)*3+k;
                    if(board[r][c]>='1' && board[r][c]<='9'){
                    mp[board[r][c]-'0']++;
                    if(mp[board[r][c]-'0']>1){
                        return false;
                    }
                    }
                }
            }
        }
        return true;
    }
};
