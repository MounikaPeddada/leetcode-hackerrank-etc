class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        quicksort(nums,0,n-1);
    }
    void quicksort(vector<int>& nums,int low,int high)
    {
        if(low<high) //this itself acts as base case
        {
            int pi=part(nums,low,high);
            quicksort(nums,low,pi-1);
            quicksort(nums,pi+1,high);
        }
    }
    int part(vector<int>& nums,int low,int high)
    {
        int pivot=nums[low];
        int i=low;
        int j=high;
        while(i<j)
        {
            while(nums[i]<=pivot && i<high) //skip the greater elemnts till u get the smaller one
            {
                i++;
            }
            while(nums[j]>pivot && j>low) //this should check if right values are low amd since j is going left it should be >low
            {
                j--;
            }
            if(i<j)
            {
                swap(nums[i],nums[j]);
            }
        }
        swap(nums[j],nums[low]); //swap nums[j] with low not pivot as pivot is temporary variable
        return j;

    }
};