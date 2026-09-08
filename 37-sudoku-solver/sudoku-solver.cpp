class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
    bool solve(vector<vector<char>>& board)
    {
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(board[i][j]=='.')
                {
                    for(char c='1';c<='9';c++)
                    {
                        if(isvalid(board,i,j,c))
                        {
                            board[i][j]=c;
                            if(solve(board)==true)
                               return true;
                            else board[i][j]='.';
                        }
                    }
                    return false; //if no digit is fitting for that sqaure then false
                }
            }
        }
        return true; // if there is no missing box itself it means (its not entering i,j for loops)sudoko is already filled so return true
    }
     bool isvalid(vector<vector<char>>& board,int row,int col,char c)
    {
        for(int i=0;i<board[0].size();i++)
        {
            //checking if the number exists in same row
            if(board[row][i]==c) return false;
            
            //for same column
            if(board[i][col]==c) return false;

            //for the 3 by 3 box
            if(board[3*(row/3)+(i/3)][3*(col/3)+(i%3)]==c) return false;
        }
        return true;
    }
};