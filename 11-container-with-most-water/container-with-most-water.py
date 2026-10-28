class Solution:
    def maxArea(self, height: list[int]) -> int:
        l=0
        n=len(height)
        r=n-1
        area=float(-inf)
        while(l<r):
            curr_len=min(height[l],height[r])
            curr_width=r-l
            area=max(area,curr_len*curr_width)
            if(height[l]<height[r]):
                l+=1
            else:
                r-=1
        return area

        