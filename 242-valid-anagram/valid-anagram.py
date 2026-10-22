class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        from collections import defaultdict
        freq1=defaultdict(int)
        for alph in s:
            freq1[alph]+=1
        freq2=defaultdict(int)
        for alpha in t:
            freq2[alpha]+=1
        return freq1==freq2


        