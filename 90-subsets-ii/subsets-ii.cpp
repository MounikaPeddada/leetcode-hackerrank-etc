class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        //sort the array it simportant or how will it check if nums[i]==nums[i-1]
        sort(nums.begin(),nums.end());
        vector<int>arr;
        vector<vector<int>>ans;
        findsubsets(0,arr,nums,ans);
        return ans;
    }
    void findsubsets(int ind, vector<int>&arr,vector<int>&nums,vector<vector<int>>&ans)
    {
        ans.push_back(arr);
        for(int i=ind;i<nums.size();i++)
        {
            if(i>ind && nums[i]==nums[i-1]) continue;
            arr.push_back(nums[i]);
            findsubsets(i+1,arr,nums,ans);
            arr.pop_back();
        }
    }
};