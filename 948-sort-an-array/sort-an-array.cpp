class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        mergesort(nums,0,n-1);
        return nums;
    }
    void mergesort(vector<int>&nums,int low,int high)
    {
        //base case
        if(low>=high) return;
        int mid=(low+high)/2;
        mergesort(nums,low,mid);
        mergesort(nums,mid+1,high);
        merge(nums,low,mid,high);
    }
    void merge(vector<int>&nums,int low,int mid,int high)
    {
        vector<int>temp;
        int left=low;
        int right=mid+1;
        while(left<=mid && right<=high)
        {
            if(nums[left]<=nums[right])
            {
                temp.push_back(nums[left]);    //comparing ith element of lsb with ith element of rsb
                left++;
            }
            else
            {
                temp.push_back(nums[right]);
                right++;
            }
        }
        //if any sub tree is exhausted
        while(left<=mid)
        {
            temp.push_back(nums[left]);    //comparing ith element of lsb with ith element of rsb
            left++;

        }
        while(right<=high)
        {
            temp.push_back(nums[right]);
            right++;
        }
        //copy temp back to org array nums
        for(int i=low;i<=high;i++)
        {
            nums[i]=temp[i-low];  //i starts with low but temp should start with 0 , so i-low
        }

    }
};