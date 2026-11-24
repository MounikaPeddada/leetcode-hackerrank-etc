class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        int board[3][3]={};
        for (int i=0;i<moves.size();i++)
        {
            //step 1: check whos playing so uk whether to assign +1or -1
            int p=(i%2==0)?1:-1;
            //step 2 : locate moves on board and assign value
            board[moves[i][0]][moves[i][1]]=p;
            //step 3: check for any wins
            for(int k=0; k<3;k++)
            {
                if(abs(board[k][0]+board[k][1]+board[k][2])==3||
                   abs(board[0][k]+board[1][k]+board[2][k])==3||
                   abs(board[0][0]+board[1][1]+board[2][2])==3||
                   abs(board[0][2]+board[1][1]+board[2][0])==3)
                   return (i%2==0)?"A":"B";
            }
        }
        return (moves.size()==9)?"Draw":"Pending";
        
    }
};