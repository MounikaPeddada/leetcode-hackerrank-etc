class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size()-1;
        int n=matrix[0].size()-1;
        return bs(matrix,target,0,n,m);
    }
    bool bs(vector<vector<int>>& matrix, int target,int row,int col,int m)
    {
        while(row<=m && col>=0)
        {
            if(matrix[row][col]==target) return true;
            if(matrix[row][col]>target) col--;
            else row++;
        }
        return false;
    }
};