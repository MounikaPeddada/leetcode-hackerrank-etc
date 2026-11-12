class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        //find max num
        int n=0;
        for (int num:nums)
        {
            n=max(n,num);
        }
        vector<int>freq(n+1,0); //array with index 0 to maximum num
        for (int num:nums)
        {
            freq[num]+=1;
        }
        int prev1=0;
        int prev2=0;
        for (int i=0;i<n+1;i++)
        {
            int curr=max(freq[i]*i+prev2,prev1);
            prev2=prev1;
            prev1=curr;
        }
        return prev1;
        
    }
};