class Solution:
    def groupAnagrams(self, strs: list[str]) -> list[list[str]]:
        from collections import defaultdict
        collect=defaultdict(list)

        for word in strs:
            freq=defaultdict(int)
            for char in word:
                freq[char]+=1
            key=tuple(sorted(freq.items()))
            collect[key].append(word)
        
        list1=[]
        for x in collect.items():
            list1.append(x[1])
        return list1       
        