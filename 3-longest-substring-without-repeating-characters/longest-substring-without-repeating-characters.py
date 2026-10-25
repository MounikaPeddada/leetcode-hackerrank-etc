class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        l=0
        r=0
        win_len=0
        n=len(s)
        char_map={}
        while(r<n):
            char=s[r]
            if char in char_map and char_map[char]>=l:
                l=1+char_map[char]
            char_map[char]=r
            win_len=max(win_len,r-l+1)
            r+=1
        return win_len
        