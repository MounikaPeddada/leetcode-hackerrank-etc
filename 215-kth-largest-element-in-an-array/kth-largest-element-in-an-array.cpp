class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //using quick sort
        int n =nums.size();
        int tk=n-k;
        return quicksort(nums,0,n-1,tk);
    }
    int quicksort(vector<int>& nums,int low,int high,int tk)
    {
        if(low==high)
        {
            return nums[low];
        }
        int p=part(nums,low,high);
        if(p==tk) //tk is index ,p is pivot being placed in its correct index , so 
        {
            return nums[p]; //if k index is matching p index then return nums[p]
        }
        else if (p>tk)
        {
            return quicksort(nums,low,p-1,tk);
        }
        else
        {
            return quicksort(nums,p+1,high,tk);
        }
    }
    int part(vector<int>& nums,int low,int high)
    {
        int randix =low+rand()%(high-low+1);
        swap(nums[low],nums[randix]);
        int i=low;
        int j=high;
        int pivot=nums[low];
        while(i<j)
        {
            while(nums[i]<=pivot && i<high)
            {
                i++;
            }
            while(nums[j]>pivot && j>low)
            {
                j--;
            }
            if(i<j)
            {
                swap(nums[i],nums[j]);
            }
        }
        swap(nums[j],nums[low]);
        return j;
    }
};