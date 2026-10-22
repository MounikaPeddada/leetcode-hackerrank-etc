class Solution:
    def maxProfit(self, prices: list[int]) -> int:
        mini=float('inf')
        max_profit=0
        for price in prices:
            if price<mini:
                mini=price
            elif (price-mini)>max_profit:
                max_profit=price-mini
        return max_profit

        