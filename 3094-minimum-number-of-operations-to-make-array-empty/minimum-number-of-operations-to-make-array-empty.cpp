class Solution {
public:
    int minOperations(vector<int>& nums) {
        //build hash array first
        unordered_map<int,int> freq;
        int ans=0;
        for(int x: nums)
        {
            freq[x]+=1;
        }
        for (auto& y:freq)
        {
            int cur=y.second;
            if(cur==1) return -1;
            ans+=(cur+2)/3;

        }
        return ans;
    }
};