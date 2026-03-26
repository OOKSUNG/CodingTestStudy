class Solution:
    def merge(self, low, mid, high, S):
        U = [0] * (high - low + 1)
        i, j, k = low, mid + 1, 0

        while i <= mid and j <= high:
            if S[i] <= S[j]:
                U[k] = S[i]
                i += 1
            else:
                U[k] = S[j]
                j += 1
            k += 1

        while i <= mid:
            U[k] = S[i]
            i += 1
            k += 1

        while j <= high:
            U[k] = S[j]
            j += 1
            k += 1

        for l in range(low, high + 1):
            S[l] = U[l - low]

    def mergesort(self, low, high, S):
        if low >= high:
            return 0

        mid = (low + high) // 2

        count = 0
        count += self.mergesort(low, mid, S)
        count += self.mergesort(mid + 1, high, S)

        # 🔥 핵심
        j = mid + 1
        for i in range(low, mid + 1):
            while j <= high and S[i] > 2 * S[j]:
                j += 1
            count += (j - (mid + 1))

        self.merge(low, mid, high, S)

        return count

    def reversePairs(self, nums: List[int]) -> int:
        return self.mergesort(0, len(nums) - 1, nums)