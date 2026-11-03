class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        int n =tasks.size()-1;
        int ans=0;
        unordered_map<int,int>freq;
        for(int task:tasks)
        {
            freq[task]+=1;
        }
        for (auto& pair:freq)
        {
            int count=pair.second;
            if (count==1)
            {
                return -1;
            }
            ans+=(count+2)/3;
        }
        return ans;
    }
};