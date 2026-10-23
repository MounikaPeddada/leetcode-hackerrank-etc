class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0;
        int l=0,r=0,n=nums.size();
        int min_len=INT_MAX;
        while(r<n)
        {
            sum+=nums[r];
            while(sum>=target)
            {
                min_len=min(min_len,r-l+1);
                sum-=nums[l];
                l=l+1;
            }
            r=r+1;
        }
        if (min_len==INT_MAX) return 0;
        else return min_len;
    }
};