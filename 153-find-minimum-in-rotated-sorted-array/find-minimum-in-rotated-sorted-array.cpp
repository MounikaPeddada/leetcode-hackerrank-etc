class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        int ans= INT_MAX;
        while(low<=high)
        {
            long long int mid=low+(high-low)/2;
            if(nums[low]<=nums[high])
            {
                ans=min(ans,nums[low]); //ts condition means array is already sorted happens when k is size of array
                break; //if u wont add break it might go to nums[low]<=nums[mid]
            }
            if(nums[low]<=nums[mid])
            {
                ans=min(ans,nums[low]); //update before low changes
                low=mid+1; //if low to mid is sorted , search in the next part since all of em are big nums
            }
            else
            {
                high=mid-1; //if low to mid nor sorted , search in that scope
                ans=min(ans,nums[mid]);
            }
        }
        return ans; 
    }
};