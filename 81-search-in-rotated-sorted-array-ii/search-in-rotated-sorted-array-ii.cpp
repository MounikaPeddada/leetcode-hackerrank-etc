class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]==target) return true;
            if(nums[mid]==nums[low]&& nums[mid]==nums[high])
            {
                low=low+1;
                high=high-1;
                continue;//goes back to while loop to calculate the new mid after low and high chnages
            }
            if(nums[mid]>=nums[low])  //checking if left array is sorted
            {
                if(nums[low]<=target && target<nums[mid]) //if left array is sorted
                {
                    high=mid-1;  //change the high boundary
                }
                else
                {
                    low=mid+1; //else if its not sorted go backk to the other half 
                }
            }
            else
            {
                if(nums[mid]<target && target<=nums[high]) //if irght array is sorted 
                {
                    low=mid+1; //discard left part of the array
                }
                else
                {
                    //if not sorted
                    high=mid-1;//go back to the other half by changing the boundary of high
                }
            }

        }
        return false;
        
    }
};