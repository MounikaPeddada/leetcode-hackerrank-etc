class Solution:
    def productExceptSelf(self, nums: list[int]) -> list[int]:
        n=len(nums)
        ans=[1]*n
        lp=1
        rp=1
        for i in range(n):
            ans[i]=lp
            lp*=nums[i]
        for i in range(n-1,-1,-1):
            ans[i]*=rp
            rp*=nums[i]
        return ans

        