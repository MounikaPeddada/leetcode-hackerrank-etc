class Solution:
    def validTicTacToe(self, board: list[str]) -> bool:
        x_count=sum(row.count("X")for row in board)
        o_count=sum(row.count("O")for row in board)

        def any_wins(player):
            for i in range(3):
                if all(board[i][j]==player for j in range(3)):return True
                if all(board[j][i]==player for j in range(3)):return True
            
            if all(board[i][i]==player for i in range(3)): return True
            if all(board[i][2-i]==player for i in range(3)): return True

            return False
        x_wins = any_wins("X")
        o_wins = any_wins("O")
        #win validations now
        if x_wins and o_wins :
            return False
        if x_wins:
            return x_count==o_count+1
        if o_wins:
            return o_count==x_count
        return x_count==o_count+1 or o_count==x_count

