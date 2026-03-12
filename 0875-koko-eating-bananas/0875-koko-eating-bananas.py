class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        high = max(piles)
        low = 1
        while low <= high:
            sum = 0
            mid = floor((high + low) / 2)
            for i in piles:
                sum += ceil(i / mid) 
            if sum > h:
                low = mid + 1
            else:
                high = mid - 1
        return low
        
