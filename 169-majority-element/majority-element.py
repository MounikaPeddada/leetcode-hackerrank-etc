class Solution:
    def majorityElement(self, nums: list[int]) -> int:
        from collections import defaultdict
        freq=defaultdict(int)
        n=len(nums)
        for num in nums:
            freq[num]+=1
            if freq[num]>n/2:
                return num
        return -1
        