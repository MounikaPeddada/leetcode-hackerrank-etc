class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        count=0
        cs=0
        needed=0
        mapp={0:1}
        for num in nums :
            cs+=num
            needed=cs-k
            if needed in mapp:
                #count first
                count+=mapp[needed]
            #update mapp's key's frequency 
            if cs in mapp:
                mapp[cs]+=1
            else:
                mapp[cs]=1
        
        return count

        