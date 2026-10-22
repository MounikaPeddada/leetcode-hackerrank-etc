class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        #take a seen hash map , where the number and its index is stored , not frequency
        seen={}
        for i,num in enumerate(nums):
            comp=target-num
            if comp in seen:
                return [seen[comp],i]

            seen[num] = i

        return []

#here we add number,index to seen map 
#we check if target-num exists in seen map , if yes we return that seen[comp] and i

    
        