class Solution:
    def containsDuplicate(self, nums: list[int]) -> bool:
        seen = set()
        for num in nums:
            if num in seen:
                return True #check if its already in seen before adding it , if yes exit out by returning true
            seen.add(num)
        return False
        
        