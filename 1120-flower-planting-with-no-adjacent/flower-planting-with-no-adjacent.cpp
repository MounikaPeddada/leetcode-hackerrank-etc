class Solution {
public:
    vector<int> gardenNoAdj(int n, vector<vector<int>>& paths) {
        vector<int>colour(n+1,0);
        solve(1,n,paths,colour);
        return vector<int>(colour.begin() + 1, colour.end());
    }
    bool solve(int node,int n, vector<vector<int>>& paths,vector<int>&colour)
    {
        //base case
        if(node==n+1)
        {
            return true;
        }
        //running a for loop on all colours
        for(int i=1 ; i<=4; i++)
        {
            if(ispossible(node,i,paths,colour)==true)
            {
                colour[node]=i;
                if(solve(node+1,n,paths,colour)==true)
                  return true;
                colour[node]=0;
            }
        }
        return false;
    }
    bool ispossible(int node,int col,vector<vector<int>>& paths,vector<int>&colour)
    {
        for(auto &path : paths)
        {
            int u=path[0];
            int v=path[1];
            if(u==node && colour[v]==col) return false;
            if(v==node && colour[u]==col) return false;
        }
        return true;
    }
};