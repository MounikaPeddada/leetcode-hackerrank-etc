class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>temp;
        int left=0;
        int right=0;
        while(left<=m-1 && right<=n-1)
        {
            if(nums1[left]<=nums2[right])
            {
                temp.push_back(nums1[left]);
                left++;
            }
            else 
            {
                temp.push_back(nums2[right]);
                right++;
            }

        }
        //when either of 2 arrays gets exhausted
        while(left<=m-1)
        {
            temp.push_back(nums1[left]);
            left++;
        }
        while(right<=n-1)
        {
            temp.push_back(nums2[right]);
            right++; 
        }
        //transfer temp to nums1
        for(int i=0;i<m+n;i++)
        {
            nums1[i]=temp[i];
        }

        
    }
};