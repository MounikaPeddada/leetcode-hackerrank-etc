class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2; //to avoid overflow for mid
            if(nums[mid]==target) return mid;
            if(nums[low]<=nums[mid]) //check if left half is sorted
            {
                if(nums[low]<=target && target<nums[mid])
                {
                    high=mid-1; // if target lies btw low and mid eliminate right half
                }
                else
                {
                    low=mid+1; //else go to the right part of the array
                }
            }
            else //coming to ts block means right part is sorted 
            {
                if(nums[mid]<target && target<=nums[high]) //check where target lies inside the right part of sorted array
                {
                    //if its btw mid and high discard left half
                    low=mid+1;
                }
                else
                {
                    high=mid-1; //else go back to left part of array and search there 
                }
            } 

        }
        return -1;
    }
};
/* mundu sorted array find chei , after that aa sorted array lo target unte proceed finding where it is
ledu ante go to other half */
