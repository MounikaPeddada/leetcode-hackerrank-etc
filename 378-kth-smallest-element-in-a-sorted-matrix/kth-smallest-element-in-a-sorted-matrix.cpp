class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n= matrix[0].size();
        int low=matrix[0][0];
        int high=matrix[n-1][n-1];
        while(low<high)
        {
            int row=0;
            int col=n-1;
            int mid=low+(high-low)/2;
            int count=0;
            while(row<n && col>=0)
            {
                if (matrix[row][col]>mid) col--;
                else
                {
                   count+=(col+1);
                   row++;
                }
            }
            if (count<k)
            {
                low=mid+1;
            }
            else //count==k , mid included 
            {
                high=mid;
            }
        }
        return low;
        
    }
};