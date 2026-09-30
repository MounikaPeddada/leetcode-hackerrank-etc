class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        int ans = INT_MAX;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            ans=min(ans,nums[mid]);
            if(nums[mid]<nums[high]) //it means right part is sorted  ignore it (ans is ans=min(ans,nums[mid]))
            {
                high=mid-1;
            }
            else if(nums[mid]>nums[high])
            {
                low=mid+1;
            }
            else
            {
                //shrink high by 1 part since nums[mid]==nums[high] high aint unique so shrink high by 1 part
                high--;
            }
        }
        return ans;

        
    }
};