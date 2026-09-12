class Solution {
public:
    string getPermutation(int n, int k) {
        //brute force approach
        vector<int>arr;
        //create nums
        vector<int>nums;
        //cretae freq
        vector<int>freq(n,0);
        string result;

        int count=0;

        for(int i=1;i<=n;i++) nums.push_back(i);

        solve(0,nums,arr,count,n,result,k,freq);

        return result;
        
    }
    void solve(int ind,vector<int>&nums,vector<int>&arr,int& count,int n,string&result,int k,vector<int>&freq)
    {
        //base case
        if(ind==n) 
        {
            count++;
            if(count==k)
            {
                for(auto &num : arr) result+=to_string(num);
                return;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(!freq[i])
            {
                arr.push_back(nums[i]);
                freq[i]=1;
                solve(ind+1,nums,arr,count,n,result,k,freq);
                freq[i]=0;
                arr.pop_back();
            }
        }
    }
};