class Solution:
    def threeSum(self, nums: list[int]) -> list[list[int]]:
        ans=[]
        nums.sort() # to avoid duplicates
        for y,x in enumerate(nums):
            if y>0 and nums[y]==nums[y-1]:
                continue
            target=-x
            seen=set()
            i=y+1
            while i < len(nums):
                comp=target-nums[i]
                if comp in seen:
                    ans.append([x,nums[i],comp])
                    while( i+1 < len(nums) and nums[i]==nums[i+1]): i=i+1
                seen.add(nums[i])
                i+=1

        return ans



        