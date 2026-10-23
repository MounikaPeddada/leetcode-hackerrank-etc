class Solution:
    def maxSubArray(self, nums: list[int]) -> int:
        mini=0
        maxi=float('-inf')
        curr_sum=0
        for i,num in enumerate(nums):
            curr_sum+=num
            maxi=max(maxi,curr_sum-mini)
            mini=min(mini,curr_sum) #keeps track of sub array with least values
        return maxi

        