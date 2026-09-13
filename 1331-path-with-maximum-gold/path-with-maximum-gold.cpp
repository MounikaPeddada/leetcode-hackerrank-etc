class Solution {
public:
    int getMaximumGold(vector<vector<int>>& grid) {
        vector<vector<int>>vis(grid.size(),vector<int>(grid[0].size(),0));
        int curr_gold=0;
        int max_gold =0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++) 
            {
                if(grid[i][j]>0)
                {
                    vis[i][j]=1;
                    curr_gold+=grid[i][j];
                    solve(i,j,grid,vis,max_gold,curr_gold);
                    curr_gold-=grid[i][j];
                    vis[i][j]=0;

                }
            }
        }
        return max_gold; 
    }
    void solve(int i,int j,vector<vector<int>>& grid,vector<vector<int>>&vis,int & max_gold,int &curr_gold)
    {
        //base case
        max_gold=max(max_gold,curr_gold);
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]==0 )
        {
            return;
        }
        //down
        if(i+1<grid.size() && !vis[i+1][j] && grid[i+1][j]>0)
        {
            vis[i+1][j]=1;
            curr_gold+=grid[i+1][j];
            solve(i+1,j,grid,vis,max_gold,curr_gold);
            curr_gold-=grid[i+1][j];
            vis[i+1][j]=0;

        }
        //left
        if(i-1>=0 && !vis[i-1][j] && grid[i-1][j]>0)
        {
            vis[i-1][j]=1;
            curr_gold+=grid[i-1][j];
            solve(i-1,j,grid,vis,max_gold,curr_gold);
            curr_gold-=grid[i-1][j];
            vis[i-1][j]=0;
        }
        //right
        if(j+1<grid[0].size() && !vis[i][j+1] && grid[i][j+1]>0)
        {
            vis[i][j+1]=1;
            curr_gold+=grid[i][j+1];
            solve(i,j+1,grid,vis,max_gold,curr_gold);
            curr_gold-=grid[i][j+1];
            vis[i][j+1]=0;
        }
        //up
        if(j-1>=0 && !vis[i][j-1] && grid[i][j-1]>0)
        {
            vis[i][j-1]=1;
            curr_gold+=grid[i][j-1];
            solve(i,j-1,grid,vis,max_gold,curr_gold);
            curr_gold-=grid[i][j-1];
            vis[i][j-1]=0;
        }
    }
};