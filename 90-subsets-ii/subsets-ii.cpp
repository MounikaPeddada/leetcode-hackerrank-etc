class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int ind=0;
        sort(nums.begin(), nums.end()); /*what is sorting doing here when we already have a for loop down to check duplicates?
        if we have [1,2,1] , we get [1,2] and [2,1] if we dont sort (for loop doesnt eliminate this) if we sort its [1,1,2]
        we get [1],[1,1],[1,2] we ownt get [2,1] again like before */      
        vector<int>arr; 
        vector<vector<int>>ans;
        int n= nums.size();

        sub(0,arr,nums,ans,n);
        return ans;
    }
    void sub(int ind,vector<int>&arr,vector<int>&nums,vector<vector<int>>&ans,int n)
    {
        if (ind==n)
        {
            for(auto &v : ans) //this is where we try to not take duplicates after sorting out the array
            {
                if(v==arr) //we arec checking if the subset we push to ans already exists in ans or not
                {
                    return;
                }
            }
            ans.push_back(arr);  
            return;
        }
        arr.push_back(nums[ind]);
        sub(ind+1,arr,nums,ans,n);
        arr.pop_back();
        sub(ind+1,arr,nums,ans,n);
    }
};