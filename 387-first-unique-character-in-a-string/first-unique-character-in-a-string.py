class Solution:
    def firstUniqChar(self, s: str) -> int:
        count = [0]*26 #create array of size 26, all w values 0 initially
        for char in s:
            index=ord(char)-ord('a')
            count[index]+=1
        for i,char in enumerate(s):
            index=ord(char)-ord('a')  #index for i
            if count[index]==1:       # true if char at index has count as 1
                return i
        return -1

        