class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==0) return 0;
        if(nums.size()==1) return nums[0];
        int n=nums.size();
        int a= robrange(nums,0,n-1);
        int b= robrange(nums,1,n);
        return max(a,b);
        
    }
    int robrange(vector<int>& nums,int start , int end)
    {
        int prev1=0;
        int prev2=0;
        for(int i= start;i<end;i++)
        {
            int current=max(prev1,prev2+nums[i]);
            prev2=prev1;
            prev1=current;
        }
        return prev1;
    }
};