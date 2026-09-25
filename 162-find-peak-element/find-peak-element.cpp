class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        //finding local maximum not global maximum
        int low=0;
        int high=nums.size()-1;
        while(low<high)
        {
            //int mid=(high+low)/2; u cant write this , int max+int max itll cause overflow u either write long long or
            int mid=low+(high-low)/2; //to prevent overflow
            if(nums[mid]<nums[mid+1]) low=mid+1;
            else  high=mid;
        }
        return low; //case where low==high   
    }
};