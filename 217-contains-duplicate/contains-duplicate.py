class Solution:
    def containsDuplicate(self, nums: list[int]) -> bool:
        from collections import defaultdict 
        freq=defaultdict(int)
        for i in nums:
           freq[i]+=1
           if freq[i]>1:
             return True
        return False
        
        