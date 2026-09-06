class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>arr;
        vector<vector<int>>ans;
        int freq[6];
        allcombs(arr,ans,freq,nums);
        return ans;
    }
    void allcombs(vector<int>&arr,vector<vector<int>>&ans,int freq[],vector<int>&nums)
    {
        //defining base case
        if(arr.size()==nums.size())
        {
            ans.push_back(arr);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(!freq[i])
            {
                arr.push_back(nums[i]);
                freq[i]=1;           //mark and push
                allcombs(arr,ans,freq,nums);
                freq[i]=0;      //unmarl and pop
                arr.pop_back();
            }
        }
    }
};