class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        max_profit = 0
        
        table = [0] * len(prices)
        table[-1] = prices[-1]
        for i in reversed(range(len(prices) - 1)):
            table[i] = max(prices[i], table[i + 1])
            max_profit = max(max_profit, table[i] - prices[i])

        return max_profit