class Solution:
    def topKFrequent(self, nums: list[int], k: int) -> list[int]:
        from collections import defaultdict
        freq=defaultdict(int)
        ans=[]
        for i in nums:
            freq[i]+=1
        freqlist=sorted(freq.items(), key=lambda x:x[1], reverse =True)
        for j in range(k):
            ans.append(freqlist[j][0])
        return ans



        