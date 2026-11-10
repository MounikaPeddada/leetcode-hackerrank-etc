class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>tri;
        for (int i=0; i< numRows;i++)
        {
            vector<int>temp(i+1,1);
            for (int j=1;j<i;j++)  
            {
                temp[j]= tri[i-1][j-1]+tri[i-1][j];
            }
            tri.push_back(temp);
        }
        return tri;
    }
};